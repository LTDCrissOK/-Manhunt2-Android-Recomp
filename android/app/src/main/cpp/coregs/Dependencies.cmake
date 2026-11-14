include(FetchContent)
set(MANHUNT2_COREGS_DIR "${CMAKE_CURRENT_LIST_DIR}")
set(MANHUNT2_GS_SCALE "1" CACHE STRING "CoreGS internal resolution scale (1..12)")
if(NOT MANHUNT2_GS_SCALE MATCHES "^([1-9]|1[0-2])$")
    message(FATAL_ERROR "MANHUNT2_GS_SCALE must be an integer from 1 to 12")
endif()
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(COREGS_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(COREGS_BUILD_TOOLS OFF CACHE BOOL "" FORCE)
set(COREGS_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
# Ubuntu's host compiler is deliberately used for shaders, never an Android executable.
set(COREGS_GLSLANG_PIN OFF CACHE BOOL "Use the installed host glslangValidator" FORCE)
find_program(COREGS_GLSLANG NAMES glslangValidator glslang REQUIRED NO_CMAKE_FIND_ROOT_PATH)
FetchContent_Declare(vulkan_headers
    GIT_REPOSITORY https://github.com/KhronosGroup/Vulkan-Headers.git
    GIT_TAG b26454f3ccd67e704117a39295fa13935fd3804c)
FetchContent_MakeAvailable(vulkan_headers)
FetchContent_Declare(coregs
    GIT_REPOSITORY https://github.com/moesuito/coregs.git
    GIT_TAG 7b9a763c0cddd98ed425ca9c1de51481745834ff
    PATCH_COMMAND "${CMAKE_COMMAND}" "-DSOURCE=<SOURCE_DIR>"
        "-DPATCH=${CMAKE_CURRENT_LIST_DIR}/patches/coregs-android.patch"
        -P "${CMAKE_CURRENT_LIST_DIR}/ApplyPatch.cmake")
FetchContent_MakeAvailable(coregs)
# First declaration wins over PS2Recomp's raylib declaration.
FetchContent_Declare(raylib
    GIT_REPOSITORY https://github.com/raysan5/raylib.git
    GIT_TAG 5.5
    PATCH_COMMAND "${CMAKE_COMMAND}" "-DSOURCE=<SOURCE_DIR>"
        "-DPATCH=${CMAKE_CURRENT_LIST_DIR}/patches/raylib-coregs.patch"
        -P "${CMAKE_CURRENT_LIST_DIR}/ApplyPatch.cmake")
