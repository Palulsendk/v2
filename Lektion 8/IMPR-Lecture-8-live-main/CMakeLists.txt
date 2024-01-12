cmake_minimum_required(VERSION 3.14)

project(Lecture8Live C)

set(CMAKE_C_STANDARD 11)

add_subdirectory(src)

enable_testing()
add_subdirectory(test)

# A full rock-paper-scissor program and test is in the 'rps' folder.
add_subdirectory(rps)
