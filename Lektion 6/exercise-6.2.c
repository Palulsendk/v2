#include <stdio.h>

int hours_minutes_seconds(int userInput, int *hour, int *minutes, int *seconds, int *remaining);

int main(void) {
    int hour = 0;
    int minutes = 0;
    int seconds = 0;
    int remaining = 0;

    int userInput;

    printf("Insert amount of seconds, you would like to convert: ");
    scanf("%d", &userInput);

    hours_minutes_seconds(userInput, &hour, &minutes, &seconds, &remaining);

    printf("The amount of seconds: %d\nCorrelates to hour(s): %d, Minute(s): %d, Second(s): %d", userInput, hour, minutes, seconds);

    return 0;
}

int hours_minutes_seconds(int userInput, int *hour, int *minutes, int *seconds, int *remaining) {
    *hour = userInput / 3600;
    *remaining = userInput % 3600;

    *minutes = *remaining / 60;
    *remaining = *remaining % 60;

    *seconds = *remaining;

    return 0;
}
