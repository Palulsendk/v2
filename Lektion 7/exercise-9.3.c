#include <stdio.h>

double max(double, double);
double min(double, double);
double plus(double, double);
double minus(double, double);

double combine_right(double a[], int n, double (*combiner)(double, double));
double combine_left(double a[], int n, double (*combiner)(double, double));

int main(void) {
    double result;
    double numbers[] = {5, 7, 8 , 11};
    int n = sizeof(numbers) / sizeof(double);

    result = combine_left(numbers, n, &minus);  /* minus(5, minus(7, minus(8, 11))) = 5 - (7 - (8 - 11)) = -5 */
    printf("Minus combination result: %f\n", result);

    result = combine_left(numbers, n, &plus);
    printf("Plus combination result: %f\n", result);

    result = combine_left(numbers, n, &min);
    printf("Min combination result: %f\n", result);

    result = combine_left(numbers, n, &max);
    printf("Max combination result: %f\n", result);

    return 0;
}


double combine_right(double a[], int n,
                     double (*combiner)(double, double)){
    double result;
    int i;

    for(i = n-2; i >= 0; --i){
        if (i == n-2)
            result = combiner(a[i], a[i+1]);
        else
            result = combiner(a[i], result);
    }

    return result;
}

double combine_left(double a[], int n,
                    double (*combiner)(double, double)){
    double result;
    int i;

    for(i = 1; i < n; ++i){
        if (i == 1)
            result = combiner(a[i-1], a[i]);
        else
            result = combiner(result, a[i]);
    }

    return result;
}


double max (double a, double b){
    return a > b ? a : b;
}

double min (double a, double b){
    return a > b ? b : a;
}

double plus(double a, double b){
    return a + b;
}

double minus(double a, double b){
    return a - b;
}