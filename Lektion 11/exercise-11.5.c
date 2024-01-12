#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int i, j, result;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &i, &j);

    result = gcd(i, j);

    printf("GCD of %d and %d is %d\n\n", i, j, result);

    return 0;
}

/* If a < b, then the first recursive call will be gcd(b, a).
   This call will exchange the parameters such that, subsequently, a >= b */
int gcd(int a, int b){
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// Og her er, tilsvarende, er rekursiv udgave baseret på gentagen subraktion:
#include <stdio.h>

int gcd(int a, int b);

int main(void) {
    int i, j, result;

    printf("Enter two non-negative integers: ");
    scanf("%d %d", &i, &j);

    result = gcd(i, j);

    printf("GCD of %d and %d is %d\n\n", i, j, result);

    return 0;
}

int gcd(int a, int b){
    if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
}