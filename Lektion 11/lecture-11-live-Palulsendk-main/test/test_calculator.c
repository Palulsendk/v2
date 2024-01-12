#include "polish_calculator.h"
#include "mtest.h"

TEST_CASE(calc_str_subtract, {
    const char str[] = "(- 9 4)";
    int result = calc_str(str);
    REQUIRE_EQ_INT(5, result);
})

TEST_CASE(calc_str_plus_mult, {
    const char str[] = "(+ (* 3 3) 1)";
    int result = calc_str(str);
    REQUIRE_EQ_INT(10, result);
})

TEST_CASE(calc_str_mult_plus, {
    const char str[] = "(* (+ 3 3) (+ 5 5))";
    int result = calc_str(str);
    REQUIRE_EQ_INT(60, result);
})

TEST_CASE(calc_str_complex, {
    const char str[] = "(- 9000 (* (- (^ 3 4) 2) (/ (- (^ (* 7 2) 2) 2) 2)))";
    int result = calc_str(str);
    REQUIRE_EQ_INT(1337, result);
})

TEST_CASE(calc_str_crazy_stuff, {
    const char str[] = "* - / + ^ - - ^ + / 133 7 1 3 3 * ^ - 7 1 3 37 + 1 3 + * - * * 3 7 1 ^ 3 3 7 1 3 3 7";
    int result = calc_str(str);
    REQUIRE_EQ_INT(1337, result);
})

MAIN_RUN_TESTS(calc_str_subtract, calc_str_plus_mult, calc_str_mult_plus, calc_str_complex, calc_str_crazy_stuff)
