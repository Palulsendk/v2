#include <string.h>
#include "palindrome.h"

int is_palindrome_iter(const char *str) {
    int length = strlen(str);
    // Iterate through first half substring and compare characters to last half substring in reverse order.
    for (int i = 0; i < length/2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0;
        }
    }
    return 1;
}

/**
 * Helper function for is_palindrome_rec.
 * Determines whether the substring between str_start and str_end (both included) is a palindrome.
 * str_start and str_end must point to locations in the same string.
 * @param str_start
 * @param str_end
 * @return
 */
int is_palindrome_rec_help(const char *str_start, const char *str_end) {
    if (str_start >= str_end) return 1;   // Empty or single-character string is palindrome.
    if (*str_start != *str_end) return 0; // First and last characters do not match -> not a palindrome.
    return is_palindrome_rec_help(str_start + 1, str_end - 1); // Else check if inner substring is a palindrome.
}
int is_palindrome_rec(const char *str) {
    int length = strlen(str);
    return is_palindrome_rec_help(str, str + length - 1);
}
