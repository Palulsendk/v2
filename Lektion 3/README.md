# IMPR-Lecture-3
## Gruppeopgaver

- [Opgave 3.1](src/exercise-3.1.c) (Inden i eller uden for en cirkel) [KN slides](https://homes.cs.aau.dk/~normark/impr-c/control-boolexp-slide-exercise-1.html)
- [Self-Check opgave 2 side 204-205](src/exercise-PSPDC-204-2.c) i Problem Solving and Program Design in C, eighth edition. 
  - Evaluate each of the following expression if `a` is `6`, `b` is `9`, `c` is `14`, and `flag` is `1`. 
  Which parts of these expressions are not evaluated due to short-circuit evaluation?
    1) `c == a + b || !flag`
    2) `a != 7 && flag || c >= 6`
    3) `!(b <= 12) && a % 2 == 0`
    4) `!(a > 5) || c < a + b)`
  - Se gerne [videoen om short circuit beregning](https://laml.cs.aau.dk/cgi-bin/video2/get/show-video.cgi?video-id=video-short-circuit-operatorer&course-id=impr&lecture-number=3&course-year=2023&video-width=640&lang=dk&video-start-time=00:00&auto-play=0) hvis I er i tvivl om reglerne.
- [Self-Check opgave 1 side 242](src/exercise-PSPDC-242-SC1.c) efterfulgt af programmeringsopgaverne 1 og 2 på side 242 og 243.
Disse opgaver handler alle om switch. (Bemærk at programmeringsopgaverne 1 og 2 side 242 og 243 også er hjemmeopgaver. 
Så måske har nogle af jer set på dem allerede...)
  - **Self-Check opgave 1**: What will be printed by this carelessly constructed `switch` statement if the calue of `color` is `R`?
    ```c
    switch (color) { /* break statements missing */
    case `R`:
        printf("red\n");
    case `B`:
        printf("blue\n");
    case `Y`:
        printf("yellow\n");
    }
    ```
- [**Programmeringsopgave 1**](src/exercise-PSPDC-242-P1.c): Write a `switch` statement that assigns to the variable `lumens` the expected brightness of an incandescent light bulb whose wattage has been stored in `watts`. Use the following table. Assign `-1` to the `lumens` if the value of `watts` is not in the table.

|Watts | Brigthness (in Lumens) |
|---|---|
|15|125|
|25|215|
|40|500|
|60|880|
|75|1000|
|100|1675|
-
  - [**Programmeringsopgave 2**](src/exercise-PSPDC-242-P2.c): Write a nested `ìf` statement equivalent to the `switch` statement described in the first programming exercise.
- [Opgave 3.2](src/exercise-3.2.c) (Operator prioriteter i logiske udtryk) [KN slides](http://people.cs.aau.dk/~normark/impr-c/control-short-cuit-expr-ex-slide-exercise-1.html)
- [Programmeringsopgave 1, side 205](src/exercise-PSPDC-205-1.c). Skriv et program med de ønskede udtryk, som erklærer og initialiserer de variable som indgår i opgaven. 
  Write an expression to test for each of the following relationships.
     1) `age` is from `18` to `21` inclusive
     2) `water` is less than `1.5` and also greater than `0.1`
     3) `year` is divisible by `4`. (_Hint:_ Use `%`)
     4) `speed` is not greater than `55`
     5) `y` is greater than `x` and no less than `z`
     6) `w` is either equal to `6` or not greater than `
- [Self-check opgave 3 side 236](src/exercise-PSPDC-236-3.c) i lærebogen Problem Solving and Program Design in C, eighth edition.
  - Write a nested `if` statement for the decision diagrammed in the accompanying flowchart. Use a multiple-alternative `if` for the intermediate decisions where possible.
    ![Flowchart](flow.jpg)
- [Opgave 3.3](src/exercise-3.3.c) (pH værdier) [KN slides](https://homes.cs.aau.dk/~normark/impr-c/control-if-else-chain-slide-exercise-1.html). Denne opgave hænger sammen med bogens opgave 3 side 236.
- [Programmeringsopgave 2, side 205](src/exercise-PSPDC-205-2.c) i Problem Solving and Program Design in C, eighth edition. 
Du må ikke bruge if-else kontrolstruturer eller betingede udtryk i løsningen af denne opgave. 
Variablene between, divisor og lowercase bør kun optræde én gang i de respektive assignment statements. 
(Hvis du har 7. udgave af bogen, hedder variablene noget andet - men ideen med opgaven er den samme i de to udgaver af bogen).
  - Write assignment statements for the following
      1) Assign a value of `0` to `between` if `n` is less than `-k` or greater than `+k`; otherwise assign `1`
      2) Assign a value of `1` to `divisor` if `digit` is a divisor of `num`; otherwise assign a value of `0`
      3) Assign a value of `1` to `lowercase` if `ch` is a lowercase letter; otherwise, assign a value of `0`
- [Opgave 3.5](src/exercise-3.5.c) (Ordningen af betingelser i en if-else kæde) [KN slides](https://homes.cs.aau.dk/~normark/impr-c/control-more-exercises-slide-exercise-1.html).


## Hjemmeopgaver
- [Self-check opgave 5 side 205](src/exercise-PSPDC-205-5.c) i Problem Solving and Program Design in C, eighth edition.
  - What value is assigned to the type `int` variable `ans` in this statement if the value of `p` is `100` and `q` is `50`?
  - `ans = (p > 95) + (q < 95);`
  - This statement is not shown as an example of a reasonable assignment statement; rather, it is a sample of a statement that makes little sense to the reader.
  - The statement is still legal and executable in C, however, because C uses integers to represent the logical values `true` and `false`.
- [Self-Check opgave 1 side 242](src/exercise-PSPDC-242-SC1.c) i Problem Solving and Program Design in C, eighth edition.
  - Opgaver er beskrevet længere oppe.
  - Hvis du har bogen, så tag også et kig på Self-Check opgave 2.
- Programmerings-opgaverne [1](src/exercise-PSPDC-242-P1.c) og [2](src/exercise-PSPDC-242-P2.c) side 242-243 i Problem Solving and Program Design in C, eighth edition.
  - Begge opgaver er beskrevet længere oppe.
- [Opgave 6 side 252](src/exercise-PSPDC-252-6.c)[ i Problem Solving and Program Design in C, eighth edition.
  - Write a program that takes the `x-y` coordinates of a point in the Cartesian plane and prints message telling either an axis on which the point lies, or the quadrant in which it is found.
    - Du kan passende udskrive kvadranterne som "-xy" hvis x-delen af punktet er negativt og y-delen er positivt og bare "-x" hvis vi præcist rammer x-aksen, men under 0.
    - punktet `(-1,1)` giver `-xy`
    - punktet `(0,-1)` giver `-y`
    - Hvad giver punktet `(0,0)` ?


