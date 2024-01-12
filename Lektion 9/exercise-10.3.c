#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *plural_noun_of(const char* noun);

int main(void) {
    char *words[] = {"chair", "dairy", "boss", "circus", "fly", "dog", "church", "clue", "dish"},
            *plural_form;
    int i;

    for(i = 0; i < (sizeof(words) / sizeof(char *)); i++){
        plural_form = plural_noun_of(words[i]);
        printf("Plural of %s is %s\n", words[i], plural_form);
        free(plural_form);
    }

    return 0;
}

char *plural_noun_of(const char* noun){
    char *res;
    int lgt = strlen(noun);

    res = malloc(lgt + 3);

    if (res == NULL){
        printf("Out of memory. Bye.");
        exit(1);
    }

    if (lgt >= 1 && noun[lgt-1] == 'y'){
        strncpy(res, noun, lgt-1);
        res[lgt-1] = '\0';   /* If omitted, strcat will not work correctly!!! */
        strcat(res, "ies");
    }
    else if ((lgt >= 1 && noun[lgt-1] == 's') ||
             (lgt >= 2 && noun[lgt-2] == 'c' && noun[lgt-1] == 'h') ||
             (lgt >= 2 && noun[lgt-2] == 's' && noun[lgt-1] == 'h')) {
        strcpy(res, noun);
        strcat(res, "es");
    }
    else {
        strcpy(res, noun);
        strcat(res, "s");
    }
    return res;
}
