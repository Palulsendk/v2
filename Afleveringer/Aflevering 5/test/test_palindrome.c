#include <assert.h>
#include "palindrome.h"

void test_palindrome_iter_true_odd();
void test_palindrome_iter_true_even();
void test_palindrome_iter_false_odd();
void test_palindrome_iter_false_even();
void test_palindrome_rec_true_odd();
void test_palindrome_rec_true_even();
void test_palindrome_rec_false_odd();
void test_palindrome_rec_false_even();

int main(void) {
    test_palindrome_iter_true_odd();
    test_palindrome_iter_true_even();
    test_palindrome_iter_false_odd();
    test_palindrome_iter_false_even();
    test_palindrome_rec_true_odd();
    test_palindrome_rec_true_even();
    test_palindrome_rec_false_odd();
    test_palindrome_rec_false_even();
}

void test_palindrome_iter_true_odd() {
    char str[] = "regninger";
    int result = is_palindrome_iter(str);
    assert(result == 1);
}
void test_palindrome_iter_true_even() {
    char str[] = "abba";
    int result = is_palindrome_iter(str);
    assert(result == 1);
}
void test_palindrome_iter_false_odd() {
    char str[] = "alabama";
    int result = is_palindrome_iter(str);
    assert(result == 0);
}
void test_palindrome_iter_false_even() {
    char str[] = "alka";
    int result = is_palindrome_iter(str);
    assert(result == 0);
}
void test_palindrome_rec_true_odd() {
    char str[] = "regninger";
    int result = is_palindrome_rec(str);
    assert(result == 1);
}
void test_palindrome_rec_true_even() {
    char str[] = "abba";
    int result = is_palindrome_rec(str);
    assert(result == 1);
}
void test_palindrome_rec_false_odd() {
    char str[] = "alabama";
    int result = is_palindrome_rec(str);
    assert(result == 0);
}
void test_palindrome_rec_false_even() {
    char str[] = "alka";
    int result = is_palindrome_rec(str);
    assert(result == 0);
}