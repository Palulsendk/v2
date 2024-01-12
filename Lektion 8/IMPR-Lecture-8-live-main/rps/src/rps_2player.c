#include <stdio.h>
#include "rock_paper_scissor.h"

/***
 * This is the multi-player version of rock-paper-scissor.
 * You can play against a friend (or yourself).
 * Have fun!
 */
int main(void) {
    // Prompt hands for player 1 and 2.
    char player1, player2;
    printf("Input hand for player 1 and player 2. r = ROCK, p = PAPER, s = SCISSOR\n");
    scanf(" %c %c", &player1, &player2);

    // Convert to enumeration type Hand.
    hand_e p1_hand = hand_of_char(player1);
    hand_e p2_hand = hand_of_char(player2);

    // Print hands for player 1 and 2.
    printf("Player 1 hand: ");
    print_hand(p1_hand);
    printf("Player 2 hand: ");
    print_hand(p2_hand);

    // Compute who wins or if it is a draw.
    game_result_e result = result_of_game(p1_hand, p2_hand);

    // Report on winner
    print_game_result(result);

    return 0;
}
