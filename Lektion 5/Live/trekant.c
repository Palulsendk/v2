#include <stdio.h>
#include <math.h>

int main(void)
{
    double x1, x2, x3,
           y1, y2, y3;

    printf("Please write the first point:\n");
    scanf("%lf", &x1);
    scanf("%lf", &y1);

    printf("Please write the second point:\n");
    scanf("%lf", &x2);
    scanf("%lf", &y2);

    printf("Please write the third point:\n");
    scanf("%lf", &x3);
    scanf("%lf", &y3);

    // line segment lengths
    double l1, l2, l3;
    // the power of the values ensures that the lengths cannot be negative
    // se also Theorem 1. in Algebra ....
    l1 = sqrt(pow(x1-x2 ,2.0) + pow(y1-y2 ,2.0));
    l2 = sqrt(pow(x2-x3 ,2.0) + pow(y2-y3 ,2.0));
    l3 = sqrt(pow(x3-x1 ,2.0) + pow(y3-y1 ,2.0));

    double total_length = l1 + l2 + l3;
    printf("The total length is %f\n", total_length);

    return 0;
}

