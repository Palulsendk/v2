# IMPR-Lecture-7

## Gruppeopgaver
- [Opgave 9.5](src/exercise-9.5.c) (Dynamisk allokering og qsort) [KN Slides](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-3.html).
  - Se [HER](https://homes.cs.aau.dk/~normark/impr-c/types-slide-rand-numbers.html) for detaljer om håndteringen af tilfældige tal i C. 
  - I anbefales kraftig til se videointroen til denne opgave inden I går i gang.
- [Opgave 9.8](src/exercise-9.8.c) (Multiple terningekast) [KN Slides](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-6.html)
- [Opgave 5 side 469](src/exercise-PSPDC-496-5.c) i kapitel 7 af Problem Solving and Program Design in C, eighth edition.
  - Et par gode råd - læs dem inden du går igang.
  - Vær sikker på at nedbryde problemløsningen i et antal små funktioner: Som altid, top-down programmering ved trinvis forfinelse.
  - A barcode scanner for Universal Product Codes (UPCs) verifies the 12-digit code scanned by comparing the code's last digit (called a _check digit_) to its own computation of the check digit from the first 11 digits as follows:
    1) Calculate the sum of the digits in the odd-numbered positions (the first, third, ..., eleventh digits) and multiply this sum by `3`.
    2) Calculate the sum of the digits in the even-numbered positions (the second, fourth, ..., tenth digits) and add this to the previous result.
    3) If the last digit of the result from step (b) is `0`, then `0` is the check digit.
    Otherwise, subtract the last digit from `10` to calculate the check digit.
    4) If the check digit matches the final digit of the 12-digit UPC, the UPC is assumed correct.
  - Write a program that prompts the user to enter the 12 digits of a barcode seperated by spaces. 
  The program should store the digits in an integer array, calculate the check digit, and compare it to the final barcode digit. 
  If the digits match, output the barcode with the message "validated". 
  If not, output the barcode with the message "error in barcode". 
  Also, output with labels the results from steps (a) and (b) of the check-digit calculations. 
  Note that the "first" digit of the barcode will be stored in element `0` of the array. 
  Try your program on the following barcodes, three of which are valid. 
  For the first barcode, the result from step 2 is `79` = `(0+9+0+8+4+0)*3+(7+4+0+0+5)`.
```
0 7 9 4 0 0 8 0 4 5 0 1
0 2 4 0 0 0 1 6 2 8 6 0
0 1 1 1 1 0 8 5 6 8 0 7
0 5 1 0 0 0 1 3 8 1 0 1
```
- [Opgave 9.3](src/exercise-9.3.c) (Reduktion af et array) [KN Slides](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-1.html)
- [Opgave 9.4](src/exercise-9.4.c) (bsort - den sidste opgave i dag, eller den første hvis I ønsker en anderledes udfordring) [KN Slides](https://homes.cs.aau.dk/~normark/impr-c/arrays-opgaver-slide-exercise-2.html)

## Hjemmeopgaver
- [Review Question 1 side 464 i kapitel 7](src/exercise-PSPDC-464-1.c) i Problem Solving and Program Design in C, eighth edition.
  - Identify an error in the following C statements:
```c
int p[12], i;
for (i = 12; i > 0; --i)
    p[i] = i * i;
```
- [Review Question 5 side 465 i kapitel 7](src/exercise-PSPDC-465-5.c) i Problem Solving and Program Design in C, eighth edition.
  - Write a C program segment to display the index of the smallest and the largest numbers in an array `x` of 20 integers.
  - Assume array `x` already has values assigned to each element.
- [Opgave 9.2](src/exercise-9.2.c) (Polynomier) [KN Slides](https://homes.cs.aau.dk/~normark/impr-c/arrays-arrays-input-output-pars-slide-exercise-1.html)
