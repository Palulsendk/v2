#include <stdio.h>
#include <math.h>

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y);
double compute_side_length(double a_x, double a_y, double b_x, double b_y);
void print_sum(double sum);

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

    /* Compute the sum of side lengths of the triangle. */
    double total_length = compute_sum_of_length(p1_x, p1_y, p2_x, p2_y, p3_x, p3_y);

    /* Print the sum of sides to the screen. */
    print_sum(total_length);

    return 0;
}

double compute_sum_of_length(double p1_x, double p1_y, double p2_x, double p2_y, double p3_x, double p3_y) {
    double side1, side2, side3, sum;

    /* Compute lengths of each side of the triangle */
    side1 = compute_side_length(p1_x, p1_y, p2_x, p2_y);
    side2 = compute_side_length(p2_x, p2_y, p3_x, p3_y);
    side3 = compute_side_length(p3_x, p3_y, p1_x, p1_y);

    /* Compute the sum */
    sum = side1 + side2 + side3;

    return sum;
}

double compute_side_length(double a_x, double a_y, double b_x, double b_y) {
    /* Difference in x-coordinates */
    double delta_x = a_x - b_x;
    /* Difference in y-coordinates */
    double delta_y = a_y - b_y;
    /* Use Pythagoras' theorem to compute the length between points (a_x,a_y) and (b_x,b_y). */
    return sqrt(delta_x * delta_x + delta_y * delta_y);
}

void print_sum(double sum) {
    printf("Sum of sides: %lf\n", sum);
}
