#include "mtest.h"
#include "rock_paper_scissor.h"

TEST_CASE(hand_of_char_r, {
    char input = 'r';
    hand_e hand = hand_of_char(input);
    CHECK(hand == rock, "test (hand_of_char('r') == rock) failed");
})

TEST_CASE(hand_of_char_p, {
    char input = 'p';
    hand_e hand = hand_of_char(input);
    CHECK(hand == paper, "test (hand_of_char('p') == paper) failed");
})

TEST_CASE(hand_of_char_s, {
    char input = 's';
    hand_e hand = hand_of_char(input);
    CHECK(hand == scissor, "test (hand_of_char('s') == scissor) failed");
})

TEST_CASE(result_of_game_rr, {
    hand_e p1_hand = rock, p2_hand = rock;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == draw, "rock vs rock -> draw");
})
TEST_CASE(result_of_game_rp, {
    hand_e p1_hand = rock, p2_hand = paper;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p2_wins, "rock vs paper -> p2_wins");
})
TEST_CASE(result_of_game_rs, {
    hand_e p1_hand = rock, p2_hand = scissor;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p1_wins, "rock vs scissor -> p1_wins");
})
TEST_CASE(result_of_game_pr, {
    hand_e p1_hand = paper, p2_hand = rock;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p1_wins, "paper vs. rock -> p1_wins");
})
TEST_CASE(result_of_game_pp, {
    hand_e p1_hand = paper, p2_hand = paper;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == draw, "paper vs paper -> draw");
})
TEST_CASE(result_of_game_ps, {
    hand_e p1_hand = paper, p2_hand = scissor;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p2_wins, "paper vs scissor -> p2_wins");
})
TEST_CASE(result_of_game_sr, {
    hand_e p1_hand = scissor, p2_hand = rock;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p2_wins, "scissor vs rock -> p2_wins");
})
TEST_CASE(result_of_game_sp, {
    hand_e p1_hand = scissor, p2_hand = paper;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == p1_wins, "scissor vs paper -> p1_wins");
})
TEST_CASE(result_of_game_ss, {
    hand_e p1_hand = scissor, p2_hand = scissor;
    game_result_e result = result_of_game(p1_hand, p2_hand);
    CHECK(result == draw, "scissor vs scissor -> draw");
})


MAIN_RUN_TESTS(hand_of_char_r, hand_of_char_p, hand_of_char_s,
               result_of_game_rr, result_of_game_rp, result_of_game_rs,
               result_of_game_pr, result_of_game_pp, result_of_game_ps,
               result_of_game_sr, result_of_game_sp, result_of_game_ss)
