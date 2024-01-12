#define NUMBER_OF_SUITS 4
#define NUMBER_OF_VALUES 13
#define NUMBER_OF_JOKERS 3
#define SIZE_OF_DECK (NUMBER_OF_SUITS*NUMBER_OF_VALUES + NUMBER_OF_JOKERS)

/* Enumeration types for suit and value.
 * Jokers are here handled as a fifth suit, where the associated value must be `invalid`.
 * Note that the ordering of suit_e here is used when sorting the cards. */
typedef enum {clubs, diamonds, hearts, spades, joker} suit_e;
typedef enum {invalid = 0, ace = 1, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king} value_e;

/* A playing card contains a suit and a value. */
typedef struct {
    suit_e suit;
    value_e value;
} card_t;

void create_deck(card_t deck[]);
void shuffle_deck(card_t deck[], int size_of_deck);
void sort_deck(card_t deck[], int size_of_deck);
void print_deck(card_t deck[], int size_of_deck);

void swap_cards(card_t *card1, card_t *card2);
int compare_cards(const void *card1_p, const void *card2_p);
int compare_value(value_e value1, value_e value2);
int order_of_value(value_e value);

void print_card(card_t card);
const char* suit_to_str(suit_e suit);
const char* value_to_str(value_e value);
