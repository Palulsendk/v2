#include <stdio.h>

int main(void){

    int m = 5;
    int n = 13;
    int k = 3;
    int sum = 0;

    if(k < 0){
        printf("K kan ikke være mindre end 1!");
    }

    for (int i = m; i < n; ++i) {
        if(i%k == 0){
            sum+= i;
        }

    }

    printf("Resultat: %d", sum);


    return 0;
}
