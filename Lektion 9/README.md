# IMPR-Lecture-9
For de fleste af dagens opgaver er det passende at 
1) implementere funktionen i et lille bibliotek, og
2) skrive en eller flere tests af funktionen ved brug af CTest

## Gruppeopgaver
- [Opgave 10.3](src/exercise-10.3.c) (Flertals navneord). [KN Slides](http://people.cs.aau.dk/~normark/impr-c/strings-extra-opgaver-slide-exercise-1.html)
- [Opgave 10.1](src/exercise-10.1.c) (Funktionen strrev) [KN Slides](http://people.cs.aau.dk/~normark/impr-c/strings-string-mutation-slide-exercise-1.html)
- [Opgave 10.4](src/exercise-10.4.c) (Længste fælles endelse af to ord). [KN Slides](http://people.cs.aau.dk/~normark/impr-c/strings-extra-opgaver-slide-exercise-2.html)
- [Opgave 9.9](src/exercise-9.9.c) (Associative arrays) Der findes en [video](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-associative-arrays&course-id=impr&lecture-number=9&course-year=2023) der motiverer og introducerer associative arrays. Denne video, og arbejdet med opgaven om associative arrays, bliver relevant for miniprojekt 3. [KN Slides](http://people.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-7.html)     

## Hjemmeopgaver:
- [Opgave 2 side 490](src/exercise-PSPDC-490-2.c) i afsnit 8.2 i Problem Solving and Program Design in C, eighth edition.
  - Complete function `trim_blanks` whose purpose is to take a single string input parameter (`to_trim`) and return a copy of the string with leading and trailing blanks removed. Use `strncpy` in `trim_blanks`.
  - On the input `"  a phrase    "` it should return `"a phrase"`.
- [Opgave 1 side 518](src/exercise-PSPDC-518-1.c) i afsnit 8.7 i Problem Solving and Program Design in C, eighth edition.
  - Write a type `int` function `strtoint` and a type `double` function `strtodouble` that converts string representations of numbers to their numeric equivalents.
    - `strtoint("-8")` gives the value `-8`
    - `strtodouble("-75.812")` gives the value `-75.812` 
- [Opgave 8 side 539](src/exercise-PSPDC-539-8.c) i afslutningen af kapitel 8 i Problem Solving and Program Design in C, eighth edition.
  - Write a C program that displays the total number of vowels and consonants in the sentence (string) given as input by the user.
  - Check the program for the following input:
  - `Welcome to C Programming`
