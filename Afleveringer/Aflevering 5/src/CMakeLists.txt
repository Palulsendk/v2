
add_library(palindrome palindrome.c)
target_include_directories(palindrome PUBLIC .)
target_compile_options(palindrome PRIVATE -Wall -Wextra -pedantic)
