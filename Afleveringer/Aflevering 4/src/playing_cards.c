#include <stdio.h>
#include <stdlib.h>
#include "playing_cards.h"

/**
 * Constructs a deck of \code SIZE_OF_DECK \endcode playing cards, including \code NUMBER_OF_JOKERS \endcode jokers.
 * @param deck array must have space for \code SIZE_OF_DECK \endcode elements
 */
void create_deck(card_t deck[]) {
    int deck_index = 0;
    // Add jokers.
    for (int i = 0; i < NUMBER_OF_JOKERS; i++, deck_index++) {
        deck[deck_index].suit = joker;
        deck[deck_index].value = invalid; // Jokers do not have a value, so this field is marked as invalid.
    }
    // Add a card of each combination of suit and value.
    for (value_e value = ace; value <= king; value++) {
        for (suit_e suit = clubs; suit <= spades; suit++, deck_index++) {
            deck[deck_index].suit = suit;
            deck[deck_index].value = value;
        }
    }
}

/**
 * Shuffles a deck of playing cards, by swapping each card with a random card.
 * @param deck
 * @param size_of_deck
 */
void shuffle_deck(card_t deck[], int size_of_deck) {
    for (int i = 0; i < size_of_deck; i++) {
        int other_card = rand() % size_of_deck;
        swap_cards(&(deck[i]), &(deck[other_card]));
    }
}

/**
 * Sorts a deck of playing cards primarily by suit then by value. Jokers are put last.
 * The suits are ordered: clubs, diamonds, hearts, spades.
 * The values are ordered: 2, ..., 10, jack, queen, king, ace.
 * @param deck
 * @param size_of_deck
 */
void sort_deck(card_t deck[], int size_of_deck) {
    qsort(deck, size_of_deck, sizeof(card_t), compare_cards);
}

/**
 * Print a deck of playing cards to the console.
 * @param deck
 * @param size_of_deck
 */
void print_deck(card_t deck[], int size_of_deck) {
    for (int i = 0; i < size_of_deck; i++) {
        print_card(deck[i]);
        printf("\n");
    }
}

void swap_cards(card_t *card1, card_t *card2) {
    card_t temp = *card1;
    *card1 = *card2;
    *card2 = temp;
}

int compare_cards(const void *card1_p, const void *card2_p) {
    card_t card1 = *(const card_t *)card1_p;
    card_t card2 = *(const card_t *)card2_p;
    if (card1.suit < card2.suit) {
        return -1;
    } else if (card1.suit > card2.suit) {
        return 1;
    } else { // (card1.suit == card2.suit)
        return compare_value(card1.value, card2.value);
    }
}
int compare_value(value_e left, value_e right) {
    int left_order = order_of_value(left);
    int right_order = order_of_value(right);
    if (left_order < right_order) {
        return -1;
    } else if (left_order > right_order) {
        return 1;
    } else { // (left_order == right_order)
        return 0;
    }
}
int order_of_value(value_e value) {
    // ace goes after king in the sorting order.
    return value == ace ? 1 + (int)king : (int)value;
}

void print_card(card_t card) {
    if (card.suit == joker) {
        printf("Joker");
    } else {
        printf("%s %s", suit_to_str(card.suit), value_to_str(card.value));
    }
}
const char* suit_to_str(suit_e suit) {
    switch (suit) {
        case clubs:
            return "Klør";
        case diamonds:
            return "Ruder";
        case hearts:
            return "Hjerter";
        case spades:
            return "Spar";
        case joker:
        default:
            return ""; // Silently ignore incorrect suit.
    }
}
const char* value_to_str(value_e value) {
    switch (value) {
        case ace:
            return "es";
        case two:
            return "2";
        case three:
            return "3";
        case four:
            return "4";
        case five:
            return "5";
        case six:
            return "6";
        case seven:
            return "7";
        case eight:
            return "8";
        case nine:
            return "9";
        case ten:
            return "10";
        case jack:
            return "knægt";
        case queen:
            return "dame";
        case king:
            return "konge";
        case invalid:
        default:
            return ""; // Silently ignore incorrect value.
    }
}
