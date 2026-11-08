cmake_minimum_required(VERSION 3.22.1)
project(Manhunt2AndroidNative LANGUAGES C CXX)

include(FetchContent)
set(FETCHCONTENT_QUIET OFF)

# Android graphics API: compile Raylib against OpenGL ES 3.0.
# Keep this scoped to the Android build; do not alter app startup or game loading.
if(ANDROID)
    set(PLATFORM "Android" CACHE STRING "" FORCE)
    set(OPENGL_VERSION "ES 3.0" CACHE STRING "Android OpenGL ES API level" FORCE)
endif()

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
set(PS2X_ENABLE_AGRESSIVE_LOGS OFF CACHE BOOL "" FORCE)
set(PS2X_ENABLE_IOP_RPC_TRACE ON CACHE BOOL "" FORCE)
set(PS2X_ENABLE_RUNNER_UNITY_BUILD ON CACHE BOOL "" FORCE)
set(PS2X_RUNNER_UNITY_BUILD_BATCH_SIZE "32" CACHE STRING "" FORCE)
set(PS2X_ENABLE_RUNNER_PCH ON CACHE BOOL "" FORCE)

FetchContent_Declare(
    ps2recomp
    GIT_REPOSITORY https://github.com/LTDCrissOK/PS2Recomp.git
    GIT_TAG 483fc899b952b14f87713694f92f4bdf599f4572
    GIT_PROGRESS TRUE
)
FetchContent_MakeAvailable(ps2recomp)

if(ANDROID)
    # Raylib 5.5's Android bootstrap requests an ES 2.0 EGL context by default.
    # Request ES 3.0 explicitly so the renderer and the created context agree.
    set(PS2X_RAYLIB_ANDROID_EGL_SOURCE "${raylib_SOURCE_DIR}/src/platforms/rcore_android.c")
    if(NOT EXISTS "${PS2X_RAYLIB_ANDROID_EGL_SOURCE}")
        message(FATAL_ERROR "Raylib Android EGL source was not found: ${PS2X_RAYLIB_ANDROID_EGL_SOURCE}")
    endif()

    file(READ "${PS2X_RAYLIB_ANDROID_EGL_SOURCE}" PS2X_RAYLIB_ANDROID_SOURCE)
    set(PS2X_RAYLIB_CONTEXT_OLD [=[
    const EGLint contextAttribs[] =
    {
        EGL_CONTEXT_CLIENT_VERSION, 2,
        EGL_NONE
    };
]=])
    set(PS2X_RAYLIB_CONTEXT_NEW [=[
    const EGLint contextAttribs[] =
    {
        EGL_CONTEXT_CLIENT_VERSION, 3,
        EGL_NONE
    };
]=])
    string(FIND "${PS2X_RAYLIB_ANDROID_SOURCE}" "${PS2X_RAYLIB_CONTEXT_OLD}" PS2X_RAYLIB_CONTEXT_POSITION)
    if(PS2X_RAYLIB_CONTEXT_POSITION EQUAL -1)
        message(FATAL_ERROR "Raylib EGL context block changed; refusing to build with an unverified OpenGL ES context.")
    endif()
    string(REPLACE "${PS2X_RAYLIB_CONTEXT_OLD}" "${PS2X_RAYLIB_CONTEXT_NEW}"
        PS2X_RAYLIB_ANDROID_SOURCE "${PS2X_RAYLIB_ANDROID_SOURCE}")

    # GLES 3.0 provides glDrawBuffers as a core function, not the EXT entry point.
    string(REPLACE "glDrawBuffersEXT(count, buffers);" "glDrawBuffers(count, buffers);"
        PS2X_RAYLIB_ANDROID_SOURCE "${PS2X_RAYLIB_ANDROID_SOURCE}")
    file(WRITE "${PS2X_RAYLIB_ANDROID_EGL_SOURCE}" "${PS2X_RAYLIB_ANDROID_SOURCE}")
endif()

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
