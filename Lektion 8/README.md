# IMPR-Lecture-8

## Relevante videoer
Opgave 8.1 bliver introduceret i [denne video](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-intro-opgaver-maaltid&course-id=impr&lecture-number=8&course-year=2023).

Til opgave 7.4 og 7.2 kan det være relevant at tage et kig på videoerne om CMake og CTest (fra lektion 5):
 - [Intro til CMake](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-intro-cmake-flere-filer&course-id=impr&lecture-number=5&course-year=2023)
 - [Intro til CTest](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-ctest&course-id=impr&lecture-number=5&course-year=2023)
 - [Programbibliotek i CMake](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-cmake-library&course-id=impr&lecture-number=5&course-year=2023)


## Gruppeopgaver
Opgave 8.1 er en forholdsvis ligefrem opgave om enumeration typer. 
I tillæg til denne opgave har vi også gang i afleveringsopgave 3. 
Så der er flere forskellige udfordringer, som I kan arbejde med.

### Opgave 8.1 (En tilfældig menu) 
Implementeres i [src/menu.c](src/menu.c)([KN Slides](https://homes.cs.aau.dk/~normark/impr-c/types-enumeration-typer-3-slide-exercise-1.html))



### Opgave 7.4 (Kom godt i gang med CTest).
I filerne [src/point_distance.c](src/point_distance.c) og [src/point_distance.h](src/point_distance.h) er der implementeret funktioner til at beregne
afstanden imellem to punkter. 
Bemærk også her hvordan dokumentationen af de to funktioner er skrevet.
Versionen `point_distance_2d` kan kun beregne afstanden i 2 dimensioner, imens `point_distance` kan beregne det for et
vilkårligt antal dimensioner.
`point_distance` er dog implementeret forkert, det kan vi se ved at køre de implementerede tests som du finder i [test](test) mappen.
Specifikt er vores testprogrammer implementeret i [test/test_point_distance_2d.c](test/test_point_distance_2d.c) og [test/test_point_distance_nd.c](test/test_point_distance_nd.c).
Testene bliver "orkestreret" fra vores [test/CMakeLists.txt](test/CMakeLists.txt) fil.

Du kører testen ved at vælge "All CTest" og "kør" eller "debug".
![all_ctest.png](all_ctest.png)

Ret fejlene i `point_distance` så vores tests går igennem.

### Opgave 7.2 (Test af programmet der beregner timer, minutter og sekunder).
Implementeres i [src/time_calc.c](src/time_calc.c) og [src/time_calc.h](src/time_calc.h) filerne.
Husk at tilføje dem til [src/CMakeLists.txt](src/CMakeLists.txt) som et library, se hvordan det er gjort for den tidligere opgave.
Der er allerede implementeret en prototype i [src/time_calc.h](src/time_calc.h), men både implementation og dokumentation mangler.

Vi har i rigt mål beskæftiget os med et program, der beregner timer, minutter og sekunder af et antal sekunder. 
Senest har vi i Opgave 6.2 (Lektion 6) programmeret en funktion `hours_minutes_seconds`, som er et godt udgangspunkt for denne opgave.

Lav nu en systematisk test (black box unit testing) af følgende ønskede input og outputs til funktionen `hours_minutes_seconds`:

- Input: 4000 sekunder. Forventet output: 1 timer, 6 minutter og 40 sekunder
- Input: 75 sekunder. Forventet output: 0 timer, 1 minutter og 15 sekunder
- Input: 3700 sekunder. Forventet output: 1 timer, 1 minutter og 40 sekunder
- Input: 55 sekunder. Forventet output: 0 timer, 0 minutter og 55 sekunder
- Input: 3661 sekunder. Forventet output: 1 timer, 1 minutter og 1 sekunder

Programmer dine tests ved brug af CTest og asserts, præcist som det er gjort for den tidligere opgave.

Bemærk lige at vi i denne opgave ikke tester output formatet - kun beregningerne af normaliserede timer, minutter og sekunder.

### Opgave 8.4 (Kom godt i gang med et unit testing framework)
I de foregående to opgaver har du lært at bruge CTest og assert til at skrive unit test af et program.
Hvis man laver mange test af store programmer, er det rart at have lidt flere hjælpemidler. 
Testing frameworks gør det simplere at "orkestrere" sine test, og de har dedikerede funktioner (eller macroer) til at teste forskellige betingelser.  

Du skal nu løse opgave 7.4 og 7.2 ved hjælp af et testing framework i stedet for rå CTest og assert.
Jeg har lavet et simpelt testing framework, som jeg anbefaler at du bruger til denne opgave: [mtest](https://github.com/MortenSchou/mtest/).
(Du må også gerne forsøge dig med et af de mere komplekse og populære alternativer så som [Boost.Test](https://github.com/boostorg/test), [Catch2](https://github.com/catchorg/Catch2), [doctest](https://github.com/doctest/doctest) eller [Google Test](https://github.com/google/googletest).) 

Nederst i [test/CMakeLists.txt](test/CMakeLists.txt) har jeg installeret [mtest](https://github.com/MortenSchou/mtest/),
og gjort klar til unit test af point_distance i filen [test/unittest_point_distance.c](test/unittest_point_distance.c), 
hvor du selv skal skrive de resterende test cases ved brug af et testing framework.

Til unit testing (med et framework) af `hours_minutes_seconds` skal du selv skrive test cases i en ny fil og tilføje en test executable i [test/CMakeLists.txt](test/CMakeLists.txt) - se hvordan det er gjort for point_distance. 


## Hjemmeopgaver
[Opgave 15 side 332](src/exercise-PSPDC-391-7.c) i Problem Solving and Program Design in C, eighth edition. Vær sikker på at du skriver en funktion med passende parametre, som returnerer pi.

The value for pi can be determined by the series equation:
```
pi = 4* (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + 1/13 ...)
```
Write a program that prompts the user to enter the number of iterations to be executed to determine the value of pi.

### Ekstra opgave
 Del din kode fra opgaven ovenfor op så du får et bibliotek (library) der indeholder funktionen `double calc_pi(int iterations)`.
 Tilføj en test på at den beregnede værdi for pi er et sted imellem 3 og 4.