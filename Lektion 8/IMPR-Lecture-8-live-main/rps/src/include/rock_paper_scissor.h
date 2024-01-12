
/**
 * A hand in a game of rock-paper-scissor.
 */
enum hand_e {rock, paper, scissor};
typedef enum hand_e hand_e;

/**
 * This function converts a character to the hand_e enumeration type
 * @param c the character must be either 'r', 'p', or 's'.
 * @return the corresponding hand_e value
 */
hand_e hand_of_char(char c);

/**
 * Print a hand of rock-paper-scissor a human-readable format.
 * @param h the hand to print, an enumeration type (hand_e).
 */
void print_hand(hand_e h);

/**
 * Picks a random hand (rock, paper, or scissor) using rand().
 * Remember to seed using srand() prior to using this function.
 * @return the randomly selected hand
 */
hand_e pick_random_hand();

/**
 * The result of a 2-player game (player 1 wins, the game is a draw, or player 2 wins).
 */
enum game_result_e {p1_wins, draw, p2_wins};
typedef enum game_result_e game_result_e;

/**
 * This function determines the result of a game of rock-paper-scissor.
 * @param p1_hand the hand of player 1
 * @param p2_hand the hand of player 2
 * @return the result (player 1 wins, the game is a draw, or player 2 wins) as an enumeration type
 */
game_result_e result_of_game(hand_e p1_hand, hand_e p2_hand);

/**
 * Print the result of a game in a human-readable format.
 * @param result the result to print, as an enumeration type (game_result_e)
 */
void print_game_result(game_result_e result);
