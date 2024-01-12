#include <stdio.h>
#include <math.h>

/*
 * Find længden af sider i en trekant.
 */
int main() {
    /* Erklæring af variable */
    double p1_x, p1_y, p2_x, p2_y, p3_x, p3_y;

    /* Indlæs punkter fra brugeren. */
    printf("Indtast tre punkter på formen: x,y\n>");
    scanf("%lf, %lf", &p1_x, &p1_y);
    scanf("%lf, %lf", &p2_x, &p2_y);
    scanf("%lf, %lf", &p3_x, &p3_y);

    printf("Punkt 1: (%.2lf,%.2lf)\n", p1_x, p1_y);
    printf("Punkt 2: (%.2lf,%.2lf)\n", p2_x, p2_y);
    printf("Punkt 3: (%.2lf,%.2lf)\n", p3_x, p3_y);

    /* Find længden af én linje. */
    /* side1: p1 -- p2
     * side2: p2 -- p3
     * side3: p3 -- p1
     */
    double side1_x = p2_x - p1_x,
           side1_y = p2_y - p1_y;
    double side1 = sqrt(side1_x * side1_x + side1_y * side1_y);
    printf("side1 = %lf\n", side1);
    double side2_x = p3_x - p2_x,
           side2_y = p3_y - p2_y;
    double side2 = sqrt(side2_x * side2_x + side2_y * side2_y);
    printf("side2 = %lf\n", side2);
    double side3_x = p1_x - p3_x,
           side3_y = p1_y - p3_y;
    double side3 = sqrt(side3_x * side3_x + side3_y * side3_y);
    printf("side3 = %lf\n", side3);

    double total_length = side1 + side2 + side3;
    printf("total = %lf\n", total_length);

    return 0;
}
