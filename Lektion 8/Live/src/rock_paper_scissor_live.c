#include <stdio.h>
#include <stdlib.h>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSOR 's'

int main(void) {
    // Prompt hands for player 1 and 2.
    char hand1, hand2;
    int p1_won, draw;
    printf("Input hand for player 1 and player 2. r = ROCK, p = PAPER, s = SCISSOR\n>");
    scanf(" %c %c", &hand1, &hand2);
    printf("got input '%c' and '%c'\n", hand1, hand2);

    // Compute who wins or if it is a draw.
    p1_won = (hand1 == ROCK    && hand2 == SCISSOR) ||
             (hand1 == SCISSOR && hand2 == PAPER) ||
             (hand1 == PAPER   && hand2 == ROCK);

    draw  =  (hand1 == ROCK    && hand2 == ROCK) ||
             (hand1 == SCISSOR && hand2 == SCISSOR) ||
             (hand1 == PAPER   && hand2 == PAPER);

    // Report on winner
    if(p1_won){
        printf("Player 1 wins\n");
    } else if (draw){
        printf("It was a draw\n");
    } else {
        printf("Player 2 wins\n");
    }

    return 0;
}
