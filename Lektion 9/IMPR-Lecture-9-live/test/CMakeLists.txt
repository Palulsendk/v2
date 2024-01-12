add_executable(test_fun test_fun.c)

# we need to link with the library we are testing
target_link_libraries(test_fun fun_with_strings)

# this is where we actually add the test
# here we could also add some arguments, see https://cmake.org/cmake/help/book/mastering-cmake/chapter/Testing%20With%20CMake%20and%20CTest.html
add_test(NAME test_fun_1 COMMAND test_fun hello e a hallo)
add_test(NAME test_fun_2 COMMAND test_fun potato o a patata)
add_test(NAME test_fun_3 COMMAND test_fun Cool o 0 C00l)
