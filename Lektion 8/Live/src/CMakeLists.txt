
#add_compile_options(-Wall -Werror -Wconversion)

add_executable(rock_paper_scissor_live rock_paper_scissor_live.c)

add_executable(rock_paper_scissor_enum rock_paper_scissor_enum.c)


add_library(planets planets.c)
target_link_libraries(planets m)
target_include_directories(planets PUBLIC .)

add_executable(main_A main_A.c)
target_link_libraries(main_A planets)
