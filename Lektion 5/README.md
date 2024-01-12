# IMPR-Lecture-5

## Gruppeopgaver
- [Opgave 5.7](src/exercise-5.7.c) (Nye funktioner i gamle opgaver) [KN slides](https://homes.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-3.html)
- [Opgave 5.2](src/exercise-5.2.c) (Find de første n primtal) [KN slides](http://people.cs.aau.dk/~normark/impr-c/functions-par-ex-2-slide-exercise-1.html)
  - Se gerne videoen ["Intro til CMake"](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-intro-cmake-flere-filer&course-id=impr&lecture-number=5&course-year=2023&video-width=640&lang=dk&video-start-time=00:00&auto-play=0) som introducerer de nødvendige CMake kommandoer til at løse denne opgave.
- [Opgave 5.3](src/exercise-5.3.c) (Goldbachs formodning) [KN slides](http://people.cs.aau.dk/~normark/impr-c/functions-par-ex-2-slide-exercise-2.html)
- [Opgave 5.6](src/exercise-5.6.c) (Programmering af en kvadratrodsfunktion)  [KN slides](http://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-2.html)
- [Opgave 5.5](src/exercise-5.5.c) (Skudårsfunktionen) [KN slides](http://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-1.html)

Hvis I er hurtigt færdige med de første fem opgaver, kan I nu arbejde med test af jeres funktioner. Se først videoen ["Intro til CTest"](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-ctest&course-id=impr&lecture-number=5&course-year=2023&video-width=640&lang=dk&video-start-time=00:00&auto-play=0).
- Følg videoen og lav selv automatiseret test af ```is_prime``` funktionen fra [Opgave 5.2](src/exercise-5.2.c). Tilføj flere test-cases end de to i videoen. Overvej hvilke forskellige input-værdier det vil kræve at opdage forskellige fejl i programmet.
- Lav også automatiseret test til funktionerne fra de andre opgaver: ```sum_iter```, ```sum_formula```, ```my_sqrt``` og ```isLeapYear```. 
  - Flyt funktionerne over i en/flere seperate .c-filer (med prototyper i tilhørende header-filer).
  - Skriv et antal test-cases til hver funktion.
  - Automatiser kørsel af test med CTest.

## Hjemmeopgaver:
- [Self-Check opgave 1 side 143](src/exercise-PSPDC-143-1.c) fra afsnit 3.2 i Problem Solving and Program Design in C, eighth edition.
(Denne opgave er lidt anderledes i 7. udgave af bogen).
  - Rewrite the following mathematical expressions using C functions:
  - ![equations](equations.jpg)
- [Programmeringsopgave 2 side 166](src/exercise-PSPDC-166-2.c) fra afsnit 3.5 i Problem Solving and Program Design in C, eighth edition.
  - Write a function that computes the time one must leave in order to reach a certain destination by a designated time. 
  You need to deal only with arrivals occurring later the in the same day as the departure. 
  Function inputs include the arrival time as an integer on a 24-hours clock (20:30 is given as 2030), 
  the distance to the destination in kilometers, and the speed you plan to average in km/hr.
  The function result should be the required departure time (rounded to the nearest minutes) as an 
  integer on a 24-hour clock. Also, write a driver program to test your function.
