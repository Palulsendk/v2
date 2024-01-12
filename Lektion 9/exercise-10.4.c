#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_WORD_LENGTH 25
#define NUMBER_OF_WORDS 4

void rinse_string(char str[], int n);
char *longest_common_suffix(const char *word1, const char *word2, char *suffix);

int main(void) {

    /* An array of pair of char pointers. Each pair is a an array of two elements. */
    char *words[][2] =
            {
                    {"procrastination", "destination"},
                    {"globally", "internally"},
                    {"gloves", "dove"},
                    {"girl", "girl"}
            },
            str[MAX_WORD_LENGTH];
    int i;

    for(i = 0; i < NUMBER_OF_WORDS; i++){
        rinse_string(str, MAX_WORD_LENGTH);
        printf("Longest common suffix of %s and %s is %s\n", words[i][0], words[i][1],
               longest_common_suffix(words[i][0], words[i][1], str));
    }

    return 0;
}

char *longest_common_suffix(const char *word1, const char *word2, char *suffix){
    int i, j, c = 0;

    i = strlen(word1)-1; j = strlen(word2)-1;

    while (i >= 0 && j >= 0 && word1[i] == word2[j]){
        i--; j--; c++;
    }

    strncpy(suffix, word1 + i + 1, c + 1);  // includes trailing null char.

    return suffix;
}

/* Put spaces in the char array str, of length n*/
void rinse_string(char str[], int n){
    int j;
    for (j = 0; j < n; j++) str[j] = ' ';
}
