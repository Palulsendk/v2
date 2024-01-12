#include <malloc.h>
#include <string.h>

int main(void)
{
    char important1[] = "aaaaa";

    char s1[] = "Mickey ";
    char important2[] = "bbbbb";
    char s2[] = "Mouse";

//    strcat(s1, s2);

    char* result = malloc(strlen(s1) + strlen(s2) + 1);

    result[0] = '\0';
    strcat(result, s1);
    strcat(result, s2);

    printf("%s", s1);
    printf("Important '%s', '%s'\n", important1, important2);
    return 0;
}
