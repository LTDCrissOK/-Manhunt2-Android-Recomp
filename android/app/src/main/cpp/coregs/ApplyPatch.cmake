find_package(Git REQUIRED)
execute_process(COMMAND "${GIT_EXECUTABLE}" apply --reverse --check "${PATCH}"
    WORKING_DIRECTORY "${SOURCE}" RESULT_VARIABLE already_applied OUTPUT_QUIET ERROR_QUIET)
if(already_applied EQUAL 0)
    return()
endif()
execute_process(COMMAND "${GIT_EXECUTABLE}" apply --check "${PATCH}"
    WORKING_DIRECTORY "${SOURCE}" RESULT_VARIABLE invalid ERROR_VARIABLE reason)
if(NOT invalid EQUAL 0)
    message(FATAL_ERROR "Cannot apply ${PATCH}: ${reason}")
endif()
execute_process(COMMAND "${GIT_EXECUTABLE}" apply "${PATCH}"
    WORKING_DIRECTORY "${SOURCE}" RESULT_VARIABLE failed)
if(NOT failed EQUAL 0)
    message(FATAL_ERROR "Failed to apply ${PATCH}")
endif()
