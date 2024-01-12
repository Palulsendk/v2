#include <stdio.h>

long fib(long n);

int main(void) {
    long i;

    for(i = 0; i < 100; i++)
        printf("Fib(%li) = %li\n", i, fib(i));

    return 0;
}

long fib(long n){
    long result;
    static long memo[100];   /* elements pre-initialized to 0 */

    if (n == 0)
        result = 0;
    else if (n == 1)
        result = 1;
    else if (memo[n] != 0)
        result = memo[n];
    else {
        result = fib(n-1) + fib(n-2);
        memo[n] = result;
    }

    return result;
}
