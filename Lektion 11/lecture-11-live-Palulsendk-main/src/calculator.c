#include <stdio.h>
#include <stdlib.h>

#include "polish_calculator.h"

// Takes an input via scanf of polish notation and returns the result
int calc() {
    char c;
    int value = 0;
    int value2 = 0;
    scanf(" %c", &c);
    int dif = c - '0';
    if(dif >= 0 && dif <= 9)
        return dif;
    switch (c) {
        case '+':
            value = calc();
            value2 = calc();
            return value + value2;
        case '*':
            value = calc();
            value2 = calc();
            return value * value2;
        case '/':
            value = calc();
            value2 = calc();
            return value / value2;
        case '(':
            value = calc();
            scanf(" %c", &c);
            if(c != ')') {
                printf("Ill-formed program, expected ')' got '%c'\n", c);
                exit(EXIT_FAILURE);
            }
            return value;
        case ' ':
            return calc();
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return c - '0';
        default:
            printf("Unknown character '%c'\n", c);
            exit(EXIT_FAILURE);
    }
}

int main(void) {
    int result = calc();
    printf("The result is %d\n", result);
    const char test1[] = "(* (+ 3 3) (+ 5 5))";
    printf("%s = %d", test1, calc_str(test1));
    return 0;
}