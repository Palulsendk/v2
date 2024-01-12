# IMPR-Lecture-4

## Gruppeopgaver:
- [Programmeringsopgave 1, side 267](src/exercise-PSPDC-267-1.c) (Den opgave der beregner `1 + 2 + 3 + ... + (n-1) + n`)
  - Write a program segment that computes `1 + 2 + 3 + ... + (n - 1) + n`, where `n` is a data value. Follow the loop body with an `if` statement that compares this value to `(n * (n + 1 )) / 2` and displays a message that indicates whether the values are the same or different. 
  What message do you think will be displayed? 
- [Programmeringsopgave 1, side 281](src/exercise-PSPDC-281-1.c) (Den med de 9870 mennesker...)
  - There are `9870` people in a town whose population increases by 10% each year. Write a loop that displays the annual population and determines how many years (`count_years`) it will take for the population to surpass `30000`.
- [Programmeringsopgave 2, side 292](src/exercise-PSPDC-292-P2.c) ("Talpyramideopgaven")
  - Write nests of loops that cause the following output to be displayed:
```c
0 
0 1 
0 1 2 
0 1 2 3 
0 1 2 3 4
0 1 2 3 4 5
0 1 2 3 4
0 1 2 3 
0 1 2 
0 1 
0
```
- [Opgave 4.2](src/exercise-4.2.c) (Sum af tal i interval som kan divideres med samme tal) [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-control-more-iteration-while-slide-exercise-2.html)
- [Opgave 4.5](src/exercise-4.5.c) (En simplificeret udgave af Euclids algoritme som sætter fokus på en udvalgt detalje i algoritmen) [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-control-more-exercises-slide-exercise-1.html)
- [Opgave 4.1](src/exercise-4.1.c) (Forklaring af et program med en while løkke) [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-control-more-iteration-while-slide-exercise-1.html)

## Hjemmeopgaver:


- [Self-check opgave 1 side 266](src/exercise-PSPDC-266-1.c).
  - What output values are displayed by the following `while` loop for a data value of `5`? Of `6`? Of `7`?
  - In general, for a data value of any number `n`, what does this loop display?
```c
printf("Enter an integer> ");
scanf("%d", &x);
product = x;
count = 0;
while (count < 4) {
    printf("%d\n", product);
    product *= x;
    count += 1;
}
```
- [Self-check opgave 3 side 267](src/exercise-PSPDC-267-3.c).
  - The following segment needs som revision. Insert braces where they are needed and correct the errors. The corrected code should take five integers and display their sum.
```c
count = 0;
while (count <= 5)
count += 1;
printf("Next number> ");
scanf("%d", &next_num);
next_num += sum;
printf("%d numbers were added; \n", count);
printf("their sum is %d.\n", sum);
```
- [Self-check opgave 6 side 275](src/exercise-PSPDC-275-6.c). 
  - What errors do you see in the following fragment? Correct the code so it displays all multiples of `4` from `0` through `100`
```c
for mult4 = 0;
mult4 < 100;
mult4 += 4;
printf("%d\n", mult4);
```
- [Programmeringsopgave 1 side 275](src/exercise-PSPDC-275-1.c).
  - Write a loop that displays a table of angle measures along with their sine and cosine values. 
  - Assume that the initial and final angle measures (in degrees) are available in `init_degree` and `final_degree` (type `int` variables), and that the change in angle measure between table entries is given by the `step_degree` (also a type `int` variable). 
  - Remember that the math library's `sin` and `cos` functions take arguments that are in radians. 
 - [Self-check opgave 2 side 292](src/exercise-PSPDC-292-2.c). (Kør først programmet efter du har forudset resultatet!!!)
   - Show the output displayed by these nested loops:
```c
for (i = 0; i < 3; ++i) {
    printf("Outer %4d\n", i);
    for (j = 0; j < 2; ++j) {
        printf("  Inner%3d%3d\n", i, j);
    }
    for (k = 2; k > 0; --k) {
        printf("  Inner%3d%3d\n", i, k);
    }
}
```
- [Opgave 4.3](src/exercise-4.3.c) (Endnu en opgave om sum af tal i et interval) [KN slides](http://people.cs.aau.dk/~normark/impr-c/more-control-more-iteration-while-slide-exercise-3.html).


## Afleveringsopgaver
Der er en afleveringsopgave til lektion 4 som du skal hente fra et andet link og aflevere ved at lave et "commit" efterfulgt af et "push".