#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "playing_cards.h"

int main(void) {
    srand((unsigned int)time(NULL));

    card_t deck[SIZE_OF_DECK];

    printf("Constructing deck of playing cards\n");
    create_deck(deck);
    print_deck(deck, SIZE_OF_DECK);
    printf("\n");

    printf("Shuffling playing cards\n");
    shuffle_deck(deck, SIZE_OF_DECK);
    print_deck(deck, SIZE_OF_DECK);
    printf("\n");

    printf("Sorting playing cards\n");
    sort_deck(deck, SIZE_OF_DECK);
    print_deck(deck, SIZE_OF_DECK);

    return 0;
}