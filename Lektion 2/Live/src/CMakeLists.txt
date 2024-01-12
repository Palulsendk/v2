
# Tilføj programmet "increment_operators" med kildefilen "increment_operators.c"
add_executable(increment_operators increment_operators.c)

# Tilføj programmet "lecture_2_live" med kildefilen "main.c"
add_executable(lecture_2_live main.c)
# Vores program bruger: #include <math.h>
# For at vores program kan tilgå math funktioner,
# skal vi bede CMake om at 'linke' C's math-bibliotek (som her har navnet "m") til vores program.
target_link_libraries(lecture_2_live m)

add_executable(miles_to_km miles_to_km.c)
add_executable(miles_to_km_fejl miles_to_km_fejl.c)
add_executable(miles_to_km_rod miles_to_km_rod.c)
