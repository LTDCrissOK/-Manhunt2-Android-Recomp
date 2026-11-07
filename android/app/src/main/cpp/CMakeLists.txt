cmake_minimum_required(VERSION 3.22.1)
project(Manhunt2AndroidNative LANGUAGES C CXX)

include(FetchContent)
set(FETCHCONTENT_QUIET OFF)

# PS2Recomp's Android configuration builds the PS2 runtime and NativeActivity runner.
# Pin the upstream revision so a future upstream change cannot silently break this build.
set(PS2X_BUILD_RUNTIME ON CACHE BOOL "" FORCE)
set(PS2X_BUILD_RECOMP OFF CACHE BOOL "" FORCE)
set(PS2X_BUILD_ANALYZER OFF CACHE BOOL "" FORCE)
set(PS2X_BUILD_TEST OFF CACHE BOOL "" FORCE)
set(PS2X_BUILD_STUDIO OFF CACHE BOOL "" FORCE)

# Keep Android builds lean while retaining useful runtime diagnostics.
set(PS2X_ENABLE_DEBUG_UI OFF CACHE BOOL "" FORCE)
set(PS2X_ENABLE_FFMPEG OFF CACHE BOOL "" FORCE)
set(PS2X_ENABLE_SCCACHE OFF CACHE BOOL "" FORCE)
set(PS2X_ENABLE_RUNTIME_LOGS ON CACHE BOOL "" FORCE)
# Gradle exposes this only as an opt-in diagnostic build property; keep normal APKs lean.
set(PS2X_ENABLE_AGRESSIVE_LOGS "${PS2X_ENABLE_AGRESSIVE_LOGS}" CACHE BOOL "" FORCE)
set(PS2X_ENABLE_IOP_RPC_TRACE ON CACHE BOOL "" FORCE)
set(PS2X_ENABLE_RUNNER_UNITY_BUILD ON CACHE BOOL "" FORCE)
set(PS2X_RUNNER_UNITY_BUILD_BATCH_SIZE "32" CACHE STRING "" FORCE)
set(PS2X_ENABLE_RUNNER_PCH ON CACHE BOOL "" FORCE)

FetchContent_Declare(
    ps2recomp
    GIT_REPOSITORY https://github.com/LTDCrissOK/PS2Recomp.git
    GIT_TAG 3034a18e9722ddff662250a5c4b43e3d0c3df604
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(ps2recomp)

if(NOT TARGET ps2EntryRunner)
    message(FATAL_ERROR "PS2Recomp did not provide the Android ps2EntryRunner target.")
endif()

# The recompiler output is checked into this repository. Do not add output_ghidra:
# it is a separate analysis export, not the C++ set used by this Android runner.
get_filename_component(
    MANHUNT2_RECOMP_DIR
    "${CMAKE_CURRENT_LIST_DIR}/../../../../../recomp/output"
    ABSOLUTE
)

set(MANHUNT2_FUNCTION_TABLE "${MANHUNT2_RECOMP_DIR}/register_functions.cpp")
set(MANHUNT2_FUNCTION_HEADER "${MANHUNT2_RECOMP_DIR}/ps2_recompiled_functions.h")
set(MANHUNT2_STUB_HEADER "${MANHUNT2_RECOMP_DIR}/ps2_recompiled_stubs.h")

foreach(required_file IN ITEMS
    "${MANHUNT2_FUNCTION_TABLE}"
    "${MANHUNT2_FUNCTION_HEADER}"
    "${MANHUNT2_STUB_HEADER}")
    if(NOT EXISTS "${required_file}")
        message(FATAL_ERROR "Missing generated Manhunt 2 recompilation file: ${required_file}")
    endif()
endforeach()

file(GLOB MANHUNT2_RECOMP_SOURCES "${MANHUNT2_RECOMP_DIR}/*.cpp")
list(REMOVE_ITEM MANHUNT2_RECOMP_SOURCES "${MANHUNT2_FUNCTION_TABLE}")

if(NOT MANHUNT2_RECOMP_SOURCES)
    message(FATAL_ERROR "No generated Manhunt 2 C++ function files were found in ${MANHUNT2_RECOMP_DIR}.")
endif()

list(LENGTH MANHUNT2_RECOMP_SOURCES MANHUNT2_RECOMP_FUNCTION_COUNT)
message(STATUS "Manhunt 2: attaching ${MANHUNT2_RECOMP_FUNCTION_COUNT} generated C++ source files.")

# PS2Recomp's stock runner contains an empty registration table. Replace it with
# the table generated from this exact SLES-54819 ELF to avoid duplicate symbols.
get_target_property(PS2X_RUNNER_SOURCES ps2EntryRunner SOURCES)
set(PS2X_RUNNER_SOURCES_FILTERED "")
foreach(runner_source IN LISTS PS2X_RUNNER_SOURCES)
    if(NOT runner_source STREQUAL "${ps2recomp_SOURCE_DIR}/ps2xRuntime/src/runner/register_functions.cpp")
        list(APPEND PS2X_RUNNER_SOURCES_FILTERED "${runner_source}")
    endif()
endforeach()
set_property(TARGET ps2EntryRunner PROPERTY SOURCES "${PS2X_RUNNER_SOURCES_FILTERED}")

target_sources(ps2EntryRunner PRIVATE
    ${MANHUNT2_RECOMP_SOURCES}
    "${MANHUNT2_FUNCTION_TABLE}"
)

target_include_directories(ps2EntryRunner PRIVATE
    "${MANHUNT2_RECOMP_DIR}"
)

# The generated dispatch table is a large, static initializer. Compile it alone
# and without aggressive optimization; it does not contain per-frame game logic.
set_source_files_properties("${MANHUNT2_FUNCTION_TABLE}" PROPERTIES
    SKIP_UNITY_BUILD_INCLUSION ON
    COMPILE_OPTIONS "-O0"
)
