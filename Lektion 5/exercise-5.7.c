#include <stdio.h>

int sum_iter(int n);
int sum_formula(int n);
int population_projection(double start, double increase, double endResult);

/*I opgave programmeringsopgave 1 side 267 (i Problem Solving and Program Design in C, eighth edition) summerede vi alle heltal fra 1 til n,
og vi sammenlignede værdien af denne sum med (n + 1)* n / 2. Skriv nu følgende to funktioner:

En funktion sum_iter med én int parameter n. Funktionen skal addere alle heltal fra 1 til n. Funktionen skal returnere denne sum.
En funktion sum_formula med én int parameter n som indkapsler beregningen af (n + 1)* n / 2, og som returnerer værdien af dette udtryk.
I skal kalde disse to funktioner på passende input og sammenligne deres resultater (ligesom i den oprindelige opgave).*/
/*int main(void){


   int result=population_projection(9870,0.10,30000);

   printf("%d", result);

   /*int n;
   printf("Enter a value for n: ");
   scanf("%d", &n);

   int result1 = sum_iter(n);
   int result2 = sum_formula(n);

   printf("sum_iter: %d", result1);
   printf("\nsum_formula: %d", result2);


   return 0;
}*/


/*int sum_iter(int n){
    int sum1 = 0;
    for (int i = 0; i <= n; ++i) {
        sum1 += i;
    }

    return sum1;

}

int sum_formula(int n){
    int sum2 = (n + 1) * n / 2;

    return sum2;

}*/

/*En funktion population_projection med tre double parametre: start-befolkningstallet, vækstprocent pr år,
g den øvre grænse af befolkningstallet. Funktionen skal returnere det antal år (af typen int) det tager for befolkningen at vokse fra
start-befolkningstlalet til mere end slut-befolkningstallet.
Kald derefter funktionen så den løser opgaven fra side 181 i bogen (med de tre givne tal 9870, 10% og 30000).*/

int main(void){


    int result = population_projection(9870,0.10,30000);

    printf("%d", result);


}

int population_projection(double start, double increase, double endResult){
    int count_years = 0;
    while(start < endResult){
        start = start * (1 + increase);
        count_years++;
    }

    return count_years;
}