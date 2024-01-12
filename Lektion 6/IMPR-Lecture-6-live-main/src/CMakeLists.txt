
add_executable(live live.c)

add_executable(vector vector.c)
target_link_libraries(vector m)

add_executable(trekant trekant.c)
target_link_libraries(trekant m)
