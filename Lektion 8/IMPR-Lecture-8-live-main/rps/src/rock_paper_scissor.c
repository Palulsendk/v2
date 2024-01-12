#include <stdio.h>
#include <stdlib.h>
#include "rock_paper_scissor.h"

void print_hand(hand_e h){
    switch (h){
        case rock:
            printf("rock\n");
            break;
        case paper:
            printf("paper\n");
            break;
        case scissor:
            printf("scissor\n");
            break;
        default:
            exit(EXIT_FAILURE);
    }
}

hand_e hand_of_char(char c){
    hand_e h;
    switch (c){
        case 'r':
            h = rock;
            break;
        case 'p':
            h = paper;
            break;
        case 's':
            h = scissor;
            break;
        default:
            exit(EXIT_FAILURE);
    }
    return h;
}

hand_e pick_random_hand(void) {
    int number = rand() % 3;
    return (hand_e)number;
}

game_result_e result_of_game(hand_e p1_hand, hand_e p2_hand) {
    // Compute who wins or if it is a draw.
    if ((p1_hand == rock && p2_hand == scissor) || (p1_hand == scissor && p2_hand == paper) || (p1_hand == paper && p2_hand == rock)) {
        return p1_wins;
    } else if (p1_hand == p2_hand) {
        return draw;
    } else {
        return p2_wins;
    }
}

void print_game_result(game_result_e result) {
    // Report on winner
    switch (result) {
        case p1_wins:
            printf("Player 1 won\n");
            break;
        case draw:
            printf("Draw\n");
            break;
        case p2_wins:
            printf("Player 2 won\n");
            break;
    }
}
