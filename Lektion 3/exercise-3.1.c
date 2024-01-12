#include <stdio.h>
#include <math.h>

#define DELTA 0.0001

int main() {
    double r, x, y;

    // Indtast værdierne for r, x og y
    printf("Indtast radius (r): ");
    scanf("%lf", &r);
    printf("Indtast x-koordinat (x): ");
    scanf("%lf", &x);
    printf("Indtast y-koordinat (y): ");
    scanf("%lf", &y);

    // Beregn afstanden fra punktet (x, y) til (0, 0)
    double distance = sqrt(x*x + y*y);

    // Check for de tre situationer med if-statements
    if (distance < r - DELTA) {
        printf("Punktet er inden i cirklen.\n");
    } else if (fabs(distance - r) < DELTA) {
        printf("Punktet er på cirkelperiferien.\n");
    } else if (distance > r + DELTA) {
        printf("Punktet er uden for cirklen.\n");
    }

    return 0;
}
