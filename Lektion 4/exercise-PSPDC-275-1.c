#include <stdio.h>
#include <math.h>

int main(void) {
    int init_degree, final_degree, step_degree;

    // Input angle parameters
    printf("Enter initial angle in degrees: ");
    scanf("%d", &init_degree);

    printf("Enter final angle in degrees: ");
    scanf("%d", &final_degree);

    printf("Enter step size in degrees: ");
    scanf("%d", &step_degree);

    // Print table header
    printf("%10s %15s %15s\n", "Angle (deg)", "Sine", "Cosine");

    // Loop through angles and print sine and cosine values
    for (int angle = init_degree; angle <= final_degree; angle += step_degree) {
        // Convert angle to radians
        double angle_rad = angle * M_PI / 180.0;

        // Calculate sine and cosine values
        double sine_value = sin(angle_rad);
        double cosine_value = cos(angle_rad);

        // Print table row
        printf("%10d %15f %15f\n", angle, sine_value, cosine_value);
    }

    return 0;
}
