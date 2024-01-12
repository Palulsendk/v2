#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "polish_calculator.h"


// Slow (i.e. O(n) running time) version of power_of function as shown during live coding.
int power_of(int tal, int potens) {
    if(potens == 0) {
        return 1;
    } else {
        return tal * power_of(tal, potens - 1);
    }
}


// We make a pointer-to-string behave like an input stream, by moving the pointer to the next character when reading.
char get_char(const char **str) {
    char c = **str; // Read the current character
    (*str)++;       // Move the pointer to the next character
    return c;       // Return the current character
}
void unget_char(const char **str) {
    (*str)--;       // Move the pointer back to the previous character
}

// Convert a char to the corresponding digit
// Precondition: We assume c is between '0' and '9', i.e. isdigit(c) is true.
int char_to_digit(char c) {
    return c - '0';
}

// Recursive construction of a number from the digits in a string (pointer-to-string that behaves like an input stream).
int get_number_str(int last_number, const char **str) {
    char c = get_char(str);
    if (isdigit(c)) {
        int digit = char_to_digit(c);
        int number = last_number * 10 + digit;
        return get_number_str(number, str);
    } else {
        unget_char(str);   // Undo the get_char(str) above, since c was not part of the number.
        return last_number;
    }
}

// We use a pointer to string, so that recursive calls can move the pointer while reading - like an input stream works.
int calc_str_rec(const char **str) {
    int val;
    char c = get_char(str);
    if (isdigit(c)) {
        return get_number_str(char_to_digit(c), str);
    }
    switch (c) {
        case '+':
            val = calc_str_rec(str);
            return val + calc_str_rec(str);
        case '-':
            val = calc_str_rec(str);
            return val - calc_str_rec(str);
        case '*':
            val = calc_str_rec(str);
            return val * calc_str_rec(str);
        case '/':
            val = calc_str_rec(str);
            return val / calc_str_rec(str);
        case '^':
            val = calc_str_rec(str);
            return power_of(val, calc_str_rec(str));
        case '(': // We can actually ignore parenthesis, since the Polish notation is unambiguous.
        case ')': // Incorrect parenthesis would be misleading for the reader, but does not matter for computation.
        case ' ': // Ignore whitespace
            return calc_str_rec(str);
        default:
            printf("Unknown character '%c'\n", c);
            exit(EXIT_FAILURE);
    }
}

// This function allows calling with a string, rather than a pointer-to-string.
int calc_str(const char *str) {
    return calc_str_rec(&str);
}
