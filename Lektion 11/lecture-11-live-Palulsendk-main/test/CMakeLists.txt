
add_executable(test_calculator test_calculator.c)
target_link_libraries(test_calculator polish_calculator)

if(${CMAKE_VERSION} VERSION_GREATER "3.14.0")
    include(FetchContent)
    FetchContent_Declare(mtest
        GIT_REPOSITORY https://github.com/MortenSchou/mtest.git
        GIT_TAG        main  # Or specify a specific branch, tag, or commit hash.
    )
    FetchContent_MakeAvailable(mtest)

    target_link_libraries(test_calculator mtest)
    discover_tests(test_calculator)
endif()

