#include <stdio.h>

int main(void){

    int rows = 6;

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d", j);

        }
        printf("\n");

    }

    for (int i = rows - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            printf("%d", j);

        }
        printf("\n");

    }


    return 0;
}
