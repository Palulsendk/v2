# IMPR-Lecture-8-live

## Live code 1
Live coding af enumeration type i sten, saks, papir-spillet starter fra [src/rock_paper_scissor_live.c](src/rock_paper_scissor_live.c), 
og det færdige kode ligner det i [src/rock_paper_scissor_enum.c](src/rock_paper_scissor_enum.c).

---

## Auditorieopgave A
- Lav en enumeration type som repræsenterer planeterne i solsystemet. (Gør det gerne i [src/planets.h](src/planets.h))
- Lav en funktion `circumference` som givet en planet udskriver dens omkreds i kilometer. (Gør det gerne i [src/planets.c](src/planets.c) med en prototype i [src/planets.h](src/planets.h))
- Lav, i [`main`](src/main_A.c), et antal funktionskald til `circumference` med forskellige planeter som aktuelt parameter. Udskriv de returnerede værdier.

(Bonus opgave: Lav en funktion der givet en planet returnerer den "næste" planet i retning mod solen. For Merkur skal den returnere Neptun.)

---

## Live code 2
I denne live coding session laver vi koden for sten, saks, papir-spillet om til et programbibliotek og vi laver unit test af koden.
En færdig og finpudset version af dette kan findes i mappen [rps](rps).

---

## Auditorieopgave B
- Skriv unit test af `circumference` funktionen fra Auditorieopgave A.
- Benyt et unit testing framework. 
- Der er gjort klar til at skrive unit tests med brug af [mtest](https://github.com/MortenSchou/mtest/) i filen [test/test_planets.c](test/test_planets.c).

