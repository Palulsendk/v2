
add_library(rock_paper_scissor rock_paper_scissor.c)
target_include_directories(rock_paper_scissor PUBLIC include)

add_executable(rps_2player rps_2player.c)
target_link_libraries(rps_2player rock_paper_scissor)

add_executable(rps_ai rps_ai.c)
target_link_libraries(rps_ai rock_paper_scissor)
