#include <stdio.h>
#include <stdlib.h>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSORS 's'

int main(void) {

    char player1_choice, player2_choice;
    int player1_winner;
    // Input fra brugeren
    // Gemme brugernes valg
    printf("Indtast to hænder ('r', 'p', 's')\n>");
    scanf(" %c %c", &player1_choice, &player2_choice);

    printf("Player 1: %c\n Player 2: %c\n", player1_choice, player2_choice);

    // Beregn om spiller 1 har vundet (encode reglerne)
    player1_winner = (player1_choice == ROCK && player2_choice == SCISSORS) ||
                     (player1_choice == SCISSORS && player2_choice == PAPER) ||
                     (player1_choice == PAPER && player2_choice == ROCK);

    // Print om spiller 1 har vundet
    if (player1_winner) {
        printf("Player 1 is winner");
    }

    return EXIT_SUCCESS;
}