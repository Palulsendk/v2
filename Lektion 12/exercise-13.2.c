#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINE 200

void grep(char *file_name, char* pattern, int print_line_numbers);

int main(int argc, char *argv[]) {

    char *pattern, *file_name;
    int line_numbers;  /* A boolean */

    /* Access the parameters of main */
    if (argc == 3) {
        file_name = argv[2]; line_numbers = 0; pattern = argv[1];
    }
    else if (argc == 4 && strcmp(argv[1], "-n") == 0) {
        file_name = argv[3]; line_numbers = 1; pattern = argv[2];
    }
    else {
        fprintf(stderr, "Calling form: search [-n] search_string file\n");
        exit(1);
    }

    grep(file_name, pattern, line_numbers);

    return 0;
}

/* Print those lines of file_name that contain pattern */
void grep(char *file_name, char* pattern, int print_line_numbers){
    char line[MAXLINE];
    FILE *ifp;
    int n = 1;

    if ((ifp = fopen(file_name, "r")) == NULL){
        fprintf(stderr, "\nCannot open %s\n\n", file_name);
        exit(1);
    }

    while(fgets(line, MAXLINE, ifp) != NULL){
        if (strstr(line, pattern) != NULL){
            if (print_line_numbers)
                printf("%3i: %s", n, line);
            else
                printf("%s", line);
        }
        n++;
    }

    fclose(ifp);
}