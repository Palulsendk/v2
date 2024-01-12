#include <stdio.h>
double square(double x);

// Funktionen multi_apply
double multi_apply(double (*f)(double), int n, double s) {
    for (int i = 0; i < n; ++i) {
        s = f(s);
    }
    return s;
}

// Funktionen multi_apply_2
double multi_apply_2(double (*f)(double), double (*g)(double), int n, double s) {
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            s = f(s);
        } else {
            s = g(s);
        }
    }
    return s;
}

// Eksempel på en funktion, f.eks. half-funktionen
double half(double x) {
    return x / 2.0;
}
// Eksempel på brug af multi_apply_2 med half- og square-funktionerne
double square(double x) {
    return x * x;
}

int main(void) {
    // Eksempel på brug af multi_apply med half-funktionen
    double result1 = multi_apply(half, 4, 16.0);
    printf("Resultat af multi_apply(half, 4, 16.0): %.2lf\n", result1);



    double result2 = multi_apply_2(half, square, 3, 8.0);
    printf("Resultat af multi_apply_2(half, square, 3, 8.0): %.2lf\n", result2);

    return 0;
}
