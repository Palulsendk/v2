
add_executable(cirkel cirkel.c)
target_link_libraries(cirkel m) # link with math library

add_executable(trekant trekant.c)
target_link_libraries(trekant m) # link with math library

add_executable(live live.c)
target_link_libraries(live m) # link with math library
