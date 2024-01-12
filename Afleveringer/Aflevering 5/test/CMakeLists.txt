
add_executable(test_palindrome test_palindrome.c)
target_link_libraries(test_palindrome palindrome)

add_test(NAME test_palindrome COMMAND test_palindrome)
