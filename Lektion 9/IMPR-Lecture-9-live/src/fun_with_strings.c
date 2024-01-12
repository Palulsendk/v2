#include <ctype.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>
#include "fun_with_strings.h"


char *copy_replace(const char *s, char c1, char c2) {
    int length = strlen(s);
    char *result = (char *)malloc(sizeof(char) * (length + 1));

    if (result == NULL) {
        printf("Out of memory!!\n");
        exit(-1);
    }

    for (int i = 0; i <= length; i++) {
        if (s[i] == c1) {
            result[i] = c2;
        } else {
            result[i] = s[i];
        }
    }

    return result;
}


void replace(char* s, char c1, char c2) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c1) {
            s[i] = c2;
        }
    }
}

char *shout(const char *input) {
    int length = strlen(input);
    char *result = (char *)malloc(sizeof(char) * (length + 2));
    if (result == NULL) {
        printf("Out of memory!!\n");
        exit(-1);
    }
    for (int i = 0; i < length; i++) {
        result[i] = input[i];
    }
    result[length] = '!';
    result[length+1] = '\0';
    return result;
}

int nlower(char* input) {
    int count = 0;
    for(int i = 0; input[i] != '\0'; ++i) {
        if(islower(input[i]))
            count += 1;
    }
    return count;
}
