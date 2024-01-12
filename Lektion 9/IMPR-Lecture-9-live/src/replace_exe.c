#include "fun_with_strings.h"

#include <stdio.h>
#include <malloc.h>

int main(void) {

//    char s[9] = "Foodback";
//    replace(s, 'o', 'e');
//    printf("%s", s);

    char s1[9] = "Foodback";
    char *result = copy_replace(s1, 'o', 'e');

    printf("s1 = %s\n", s1);
    printf("result = %s\n", result);

    free(result);

    char impr[] = "IMPR";
    char *res = shout(impr);
    printf("%s", res);
    free(res);

    return 0;
}