#include <stdio.h>

void scale(int o_length, int o_width, int *n_length, int *n_width, int factor);

int main(void) {
    int original_length, original_width, new_length, new_width, factor;

    original_length = 5;
    original_width = 3;
    factor = 2;

    /* Græsplæne skal udvides med `factor`. Der skal beregnes `new_length` og `new_width`. */
    scale(original_length, original_width, &new_length, &new_width, factor);

    /* Udskriv gamle og nye dimensioner på skærmen. */
    printf("Original length %d\n", original_length);
    printf("Original width %d\n", original_width);
    printf("New length %d\n", new_length);
    printf("New width %d\n", new_width);

    return 0;
}

void scale(int o_length, int o_width, int *n_length, int *n_width, int factor) {
    *n_length = factor * o_length;
    *n_width = factor * o_width;
}
