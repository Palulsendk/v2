#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "rock_paper_scissor.h"

/***
 * This is the single-player version of rock-paper-scissor.
 * You play against an 'AI' that randomly selects a hand.
 * Good luck!
 */
int main(void){
    // Seed the pseudo-random number generator
    srand((unsigned int)time(NULL));

    // Prompt hands for player 1 and 2.
    char player1;
    hand_e p1_hand, p2_hand;
    printf("Input hand for player 1. r = ROCK, p = PAPER, s = SCISSOR\n");
    scanf(" %c", &player1);

    // Convert to enumeration type Hand.
    p1_hand = hand_of_char(player1);
    // Player 2 is an 'AI' that picks randomly.
    p2_hand = pick_random_hand();

    // Print hands for player 1 and 2.
    printf("Player 1 hand: ");
    print_hand(p1_hand);
    printf("Player 2 (AI) hand: ");
    print_hand(p2_hand);

    // Compute who wins or if it is a draw.
    game_result_e result = result_of_game(p1_hand, p2_hand);

    // Report on winner
    print_game_result(result);

    return 0;
}
