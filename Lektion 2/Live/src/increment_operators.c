#include <stdio.h>

int main() {
    int a = 5, b = 5, r = 0, s = 0;

    r = a++;

    s = ++b;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("r = %d\n", r);
    printf("s = %d\n", s);
    return 0;
}
