#include <stdio.h>

void celsiusToFahrenheit(double celsius, double *fahrenheit) {
    // Omregningsformel: Fahrenheit = (Celsius * 9/5) + 32
    *fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
}

int main(void) {
    double celsiusTemperature;
    double fahrenheitTemperature;

    // Input fra brugeren
    printf("Indtast temperaturen i Celsius: ");
    scanf("%lf", &celsiusTemperature);

    // Kald af funktionen med output-parameter
    celsiusToFahrenheit(celsiusTemperature, &fahrenheitTemperature);

    // Vis resultatet
    printf("%.2lf Celsius svarer til %.2lf Fahrenheit.\n", celsiusTemperature, fahrenheitTemperature);

    return 0;
}
