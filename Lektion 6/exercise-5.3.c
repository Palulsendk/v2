#include <stdio.h>
#include <stdbool.h>  // Nødvendig for at bruge bool, true og false i C

int main() {

    // Do-while-loop, der udskriver tal fra 0 til 4
    int j = 0;
    do {
        printf("%d ", j);
        j++;
    } while (j < 5);



    return 0;
}
