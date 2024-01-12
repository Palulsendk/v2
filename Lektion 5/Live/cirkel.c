#include <math.h>
#include <stdio.h>

double beregn_omkreds(double radius) {
    return 2 * M_PI * radius;
}

int main(void) {
    double r, omkreds;

    printf("Indtast en radius:\n>");
    scanf("%lf", &r);

    omkreds = beregn_omkreds(r);

    printf("Omkredsen er: %lf", omkreds);

    return 0;
}
