#include <stdio.h>
#include <string.h>

char *strrev(char *str);

int main(void) {

    char str[] = "abcd";
    printf("%s\n", strrev(str));

    strcpy(str, "abc");
    printf("%s\n", strrev(str));

    strcpy(str, "ab");
    printf("%s\n", strrev(str));

    strcpy(str, "a");
    printf("%s\n", strrev(str));

    strcpy(str, "");
    printf("%s\n", strrev(str));

    return 0;
}

char *strrev(char *str){
    int i = 0,
            j = strlen(str) - 1;
    char temp;

    while (i < j){

        // Swap char number i and j in str:
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;

        i++; j--;
    }

    return str;
}