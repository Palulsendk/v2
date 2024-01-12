#include <stdio.h>
#include <stdlib.h>

typedef enum {rock, paper, scissor} hand_e;

hand_e hand_of_char(char c);
void print_hand(hand_e h);

int main(void){
    // Prompt hands for player 1 and 2.
    char player1, player2;
    hand_e p1_hand, p2_hand;
    int p1_won, draw;
    printf("Input hand for player 1 and player 2. r = ROCK, p = PAPER, s = SCISSOR\n");
    scanf(" %c %c", &player1, &player2);

    // Convert to enumeration type Hand.
    p1_hand = hand_of_char(player1);
    p2_hand = hand_of_char(player2);

    // Print hands for player 1 and 2.
    printf("Player 1 hand: ");
    print_hand(p1_hand);
    printf("Player 2 hand: ");
    print_hand(p2_hand);

    // Compute who wins or if it is a draw.
    p1_won = (p1_hand == rock    && p2_hand == scissor) ||
             (p1_hand == scissor && p2_hand == paper) ||
             (p1_hand == paper   && p2_hand == rock);

    draw  =  (p1_hand == rock    && p2_hand == rock) ||
             (p1_hand == scissor && p2_hand == scissor) ||
             (p1_hand == paper   && p2_hand == paper);

    // Report on winner
    if(p1_won) {
        printf("Player 1 won\n");
    } else if (draw) {
        printf("Draw\n");
    } else {
        printf("Player 2 won\n");
    }

    return 0;
}

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

