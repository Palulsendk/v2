#include <stdio.h>
#include <string.h>

int getwords(FILE *ifp, int k, char *words){
    char word[100];
    int count = 0;
    while (fscanf(ifp, "%s", word) != EOF && count < k){
        count++;
        strcpy(words,word);
        words += strlen(word);
        *words = '\n';
        words++;
    }
    words--;
    *words = '\0';
    return count;
}


int main(void) {
    char buffer[500];
    int no_of_words;

    FILE *input_file = fopen("text-input","r");
    no_of_words = getwords(input_file, 5, buffer);
    printf("%i words read:\n%s\n", no_of_words, buffer);
    fclose(input_file);

    return 0;
}
