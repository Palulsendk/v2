#include <stdio.h>

int strcmp(const char *str1, const char *str2);
void pr(char *s, char *t, int r);

int main(void) {

    int b1 = strcmp("book", "shelf");
    int b2 = strcmp("shelf", "book");
    int b3 = strcmp("","book");
    int b4 = strcmp("book","bookshelf");
    int b5 = strcmp("book", "book");
    int b6 = strcmp("7book", "book");
    int b7 = strcmp("BOOK", "book");

    pr("book", "shelf", b1);
    pr("shelf", "book", b2);
    pr("", "book", b3);
    pr("book", "bookshelf", b4);
    pr("book", "book", b5);
    pr("7book","book", b6);
    pr("BOOK", "book", b7);

    return 0;
}

void pr(char *s, char *t, int r){
    printf("strcmp(\"%s\",\"%s\") = %i\n", s,t,r);
}


/* Return the string compare value of str1 and str2.
   As a precondition, neither of the strings are assumed to be NULL */
int strcmp(const char *str1, const char *str2){
    if (str1[0] == '\0' && str2[0] == '\0')         /* Both empty strings */
        return 0;
    else if (str1[0] != '\0' && str2[0] == '\0')    /* str1 non-empty, str2 is empty */
        return 1;
    else if (str1[0] == '\0' && str2[0] != '\0')    /* str2 non-empty, str1 is empty */
        return -1;
    else if (str1[0] < str2[0])                     /* first char of str1 is smaller than first char of str2 */
        return -1;
    else if (str1[0] > str2[0])                     /* first char of str2 is smaller than first char of str1 */
        return 1;
    else                                            /* (str1[0] == str2[0]). Recur! */
        return strcmp(str1+1, str2+1);
}
