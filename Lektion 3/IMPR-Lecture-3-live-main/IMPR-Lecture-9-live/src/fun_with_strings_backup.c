#include <ctype.h>
#include <malloc.h>
#include <string.h>
#include "fun_with_strings.h"


char* copy_replace(char* input, char c1, char c2) {
    int number_of_chars = strlen(input);
    char* result = (char*)malloc(sizeof(char)*(number_of_chars+1));

    for(int i = 0; i <= number_of_chars; ++i) {
        if(input[i] == c1) {
            result[i] = c2;
        } else {
            result[i] = input[i];
        }
    }
    return result;
}

void replace(char* input, char c1, char c2) {
    for(int i = 0; input[i] != '\0'; ++i) {
        if(input[i] == c1) {
            input[i] = c2;
        }
    }
}

int nlower(char* input) {
    int count = 0;
    for(int i = 0; input[i] != '\0'; ++i) {
        if(islower(input[i]))
            count += 1;
    }
    return count;
}