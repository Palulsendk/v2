
add_library(playing_cards playing_cards.c)
target_include_directories(playing_cards PUBLIC .)
target_compile_options(playing_cards PRIVATE -Wall -Wextra -pedantic)

add_executable(handin4 handin4.c)
target_link_libraries(handin4 playing_cards)
