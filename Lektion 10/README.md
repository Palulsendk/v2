# IMPR-Lecture-10
For de fleste af dagens opgaver er det passende at
1) implementere funktionen i et lille bibliotek, og
2) skrive en eller flere tests af funktionen ved brug af CTest

Du kan passende starte med dine tests, det er god brug af "top-down" programmering.

## Gruppeopgaver
- [Opgave 12.5](src/exercise-12.5.c) (Brøker og structs) [KN Slides](http://people.cs.aau.dk/~normark/impr-c/structures-flere-opgaver-slide-exercise-1.html)
- [Opgave 12.3](src/exercise-12.3.c) (Funktionen tomorrow) [KN Slides](http://people.cs.aau.dk/~normark/impr-c/structures-ex-calendar-slide-exercise-1.html)
- [Opgave 12.2](src/exercise-12.2.c) (Sortering af et array af bøger) [KN Slides](http://people.cs.aau.dk/~normark/impr-c/structures-ex-shelf-slide-exercise-1.html)

## Hjemmeopgaver
- [Opgave 1 side 607](src/exercise-PSPDC-607-1.c) i Problem Solving and Program Design in C, eighth edition.
  - Why does function `new_time`'s assignment of new values to the `second`, `minute` and `hour` components of its formal parameter `time_of_day` have no effect on the components of the actual argument `time_now` in the call `new_time(time_now, secs)`?
- [Opgave 3 side 640](src/exercise-PSPDC-640-3.c) i Problem Solving and Program Design in C, eighth edition (repræsentation af flydende tal med struct. Opgaven minder lidt om opgave 12.5).
  - A number expressed in scientific notation is represented by its mantissa (a fraction) and its exponent (an integer).
  - Define a type `sci_not_t` that has separate components for these two parts.
  - Define a function `scan_sci` that takes from the input source a string representing a positive number in scientific notation, and breaks it into components for storage in a `sci_not_t` structure.
  - The mantissa of an input value (`m`) should satisfy this condition: 
    - `0.1 <= m < 1.0`
  - also, write functions to compute the sum, difference, product, and quotient of two `sci_not_t` values.
  - All these functions should have a result type of `sci_not_t` and should ensure that the result's mantissa is in the prescribed range.
  - Define a `print_sci` function as well.
  - The, create a driver program to test your functions. Your output should be of this form:
```
Values input: 0.25000e3 0.20000e1
Sum:  0.25200e3
Difference: 0.24800e3
Product:  0.50000e3
Quotient: 0.12500e3
```