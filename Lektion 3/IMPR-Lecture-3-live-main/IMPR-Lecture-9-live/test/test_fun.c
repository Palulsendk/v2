#include "../src/fun_with_strings.h"

#include <assert.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv) {

    char* original = argv[1];
    char* to_replace = argv[2];
    char* substitute = argv[3];
    char* result = argv[4];

    printf("Comparing '%s' with '%s' where '%c' is replaced with '%c'\n", original, result, to_replace[0], substitute[0]);
    replace(original, to_replace[0], substitute[0]);
    assert(strcmp(original, result) == 0);
    return 0;
}
