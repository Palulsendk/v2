#include <stdio.h>
#include <math.h>

int main(void) {
    double p1_x, p2_x, p3_x,
           p1_y, p2_y, p3_y;

    /* Prompt three points with x- and y-coordinate. */
    printf("Please write the first point:\n");
    scanf("%lf %lf", &p1_x, &p1_y);
    printf("Please write the second point:\n");
    scanf("%lf %lf", &p2_x, &p2_y);
    printf("Please write the third point:\n");
    scanf("%lf %lf", &p3_x, &p3_y);

    /* Compute side lengths of triangle 1 sidelængderne */


    /* Compute sum of side lengths */


    /* Print sum of side lengths */
    printf("%lf, %lf -- %lf, %lf -- %lf, %lf", p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    return 0;
}
