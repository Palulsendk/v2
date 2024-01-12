#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * A small game where the user must guess a (random) number between 1 and 20.
 * The player can guess multiple times, but at the end the number of guesses must be reported.
 * If the user guesses a number outside of [1,20], then the user can guess again, and the invalid guess is not counted.
 *
 * Bonus: Report after each guess if the user was above or below the number.
 */

int main(void)
{
    int number;
    int guess;
    // remember to initialize random!
    srand((unsigned) time(0));
    number = rand();

    printf("Input you guess> \n");
    scanf(" %d", &guess);

    // what is the random number?
    printf("Random number = %d, guess = %d\n", number, guess);
    if(guess == number) {
        printf("You won!");
    }
    return 0;
}