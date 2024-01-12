
add_library(fun_with_strings fun_with_strings.c)

add_executable(replace_exe replace_exe.c)
target_link_libraries(replace_exe fun_with_strings)

add_executable(count count.c)
target_link_libraries(count fun_with_strings)

add_executable(scratch scratch.c)
add_executable(args args.c)
add_executable(strcat_problem strcat_problem.c)
