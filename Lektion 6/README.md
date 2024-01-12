# IMPR-Lecture-6

## Gruppeopgaver
- [Opgave 6.2](src/exercise-6.2.c) (Timer, minutter og sekunder - igen, igen). [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-2.html)
- [Opgave 6.6](src/exercise-6.6.c) (En valutaomregner). [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-functions-ekstr-opg-slide-exercise-2.html)
- [Opgave 6.3](src/exercise-6.3.c) (Seddeludlevering i pengeautomat). [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-3.html)
- [Opgave 6.4](src/exercise-6.4.c) (En funktion der kalder en anden funktion flere gange). [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-functions-ptr-fn-slide-exercise-1.html)

### Genbesøg gerne opgaverne fra sidst, f.eks.:
- [Opgave 5.3](src/exercise-5.3.c) (Goldbachs Formodning) [KN slides](http://people.cs.aau.dk/~normark/impr-c/functions-par-ex-2-slide-exercise-2.html)
- [Opgaverne 5.5](src/exercise-5.5.c) og [5.6](src/exercise-5.6.c). Programmér gerne varianter af funktionerne der bringer resultaterne tilbage via pointere (og som derfor bliver lavet om til void funktioner). 
[KN slides 5.5](http://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-1.html), [KN slides 5.6](http://people.cs.aau.dk/~normark/impr-c/functions-ekstr-opg-slide-exercise-2.html)
- Arbejd videre med test af funktioner. Skriv test-cases til funktioner der bringer resultaterne tilbage via pointere. Automatisér kørsel af dine test ved hjælp af CTest. Se evt. videoen ["Intro til CTest"](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-ctest&course-id=impr&lecture-number=5&course-year=2023&video-width=640&lang=dk&video-start-time=00:00&auto-play=0) igen.

## Hjemmeopgaver:

- [Opgave 6.1](src/exercise-6.1.c) (Celcius til fahrenheit med output parameter) [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-functions-ex-output-pars-slide-exercise-1.html)
- [Programmeringsopgave 7 side 391](src/exercise-PSPDC-391-7.c) fra kapitel 6 af Problem Solving and Program Design in C, eighth edition.
  - The square root of a number `N` can be approximated by a repeated calculation using the formula 
  ```c
  NG = 0.5*(LG + N/LG)
  ```
  - where `NG` stand for the next guess and `LG` stands for the last guess. Write a function that calculates the square root of a number using this method.
  - The initial guess will be the starting value of `LG`. 
The program will compute a value for `NG` using the formula given. 
The difference between `NG` and `LG` is checked to see whether these two guesses are almost identical. 
If they are, `NG` is accepted as the square root; otherwise, the next guess (`NG`) becomes the last guess (`LG`) and the process is repeated (another value is computed for `NG`, the difference is checked, and so on). 
The loop should be repeated until the difference is less than `0.005`. Use an initial guess of `1.0`.
  - Write a driver function and test your square root function for the numbers `4`, `120.5`, `88`, `36,01`, `10000`, and `0.25`.
