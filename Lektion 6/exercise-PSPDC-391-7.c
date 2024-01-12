#include <stdio.h>
#include <math.h>

double squareRoot(double N) {
    double LG = 1.0;  // Initial guess
    double NG;        // Next guess

    do {
        NG = 0.5 * (LG + N / LG);
        if (fabs(NG - LG) < 0.005) {
            // If the difference is less than 0.005, accept NG as the square root
            return NG;
        }
        LG = NG;  // Set NG as the new last guess
    } while (1); // Infinite loop, will break when the condition is met
}

int main() {
    double numbers[] = {4, 120.5, 88, 36.01, 10000, 0.25};
    int numCount = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < numCount; ++i) {
        double result = squareRoot(numbers[i]);
        printf("Square root of %.2lf is approximately %.4lf\n", numbers[i], result);
    }

    return 0;
}
