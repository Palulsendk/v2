#include <stdio.h>

int main(void) {
    int i, j;
    for(i = 0; i < 6; ++i) {
        printf("%d", i);
        for(j = 0; j < 7; ++j) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}