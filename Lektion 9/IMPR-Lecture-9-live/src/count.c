#include "fun_with_strings.h"
#include <stdio.h>

int main(void) {
    char* str = "CoUnTinG SmaLL LetTeRs Is HaRd";
    int number_of_lower = nlower(str);
    printf("Small letters : %d\n", number_of_lower);
}
