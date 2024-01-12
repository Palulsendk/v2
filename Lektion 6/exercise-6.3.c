#include <stdio.h>

int ATM(int *userAmount, int *oneHundred, int *fifty, int *twenty, int *ten, int *remaning);

int main(void) {

    int userAmount;
    int oneHundred = 0;
    int fifty = 0;
    int twenty = 0;
    int ten = 0;
    int remaning = 0;

    printf("Please enter amount you would like to withdraw: ");
    scanf("%d", &userAmount);

    ATM(&userAmount, &oneHundred, &fifty, &twenty, &ten, &remaning);

    return 0;
}

int ATM(int *userAmount, int *oneHundred, int *fifty, int *twenty, int *ten, int *remaning){
    *oneHundred = *userAmount / 100;
    *remaning = *userAmount % 100;

    *fifty = *remaning / 50;
    *remaning = *remaning % 50;

    *twenty = *remaning / 20;
    *remaning = *remaning % 20;

    *ten = *remaning / 10;

    printf("100: %d\n50: %d\n20: %d\n10: %d", *oneHundred, *fifty, *twenty, *ten);

    return 0;

}