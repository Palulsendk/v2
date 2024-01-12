#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUF_MAX 100

void normal_matrix_to_sparse_matrix(char *matrix_in_file_name,
                                    char *matrix_out_file_name){
    FILE *ifp, *ofp;
    char buf[BUF_MAX];
    int r, c, rows, cols;
    double value;

    // Open files:
    ifp = fopen(matrix_in_file_name, "r");
    ofp = fopen(matrix_out_file_name, "w");

    // Handle dimension. A line with two integers m n:
    fgets(buf, BUF_MAX, ifp);
    fputs(buf, ofp);

    // Extract number of rows and number of colums to rows and cols:
    sscanf(buf, "%d %d", &rows, &cols);

    // Read normal matrix and print sparse matrix:
    for(r = 1; r <= rows; r++){
        for(c = 1; c <= cols; c++){
            fscanf(ifp, " %lf", &value);
            if (value != 0) fprintf(ofp, "%d %d %f\n", r, c, value);
        }
    }

    // Close files:
    fclose(ifp);
    fclose(ofp);
}

void sparse_matrix_to_normal_matrix(char *matrix_in_file_name,
                                    char *matrix_out_file_name){
    FILE *ifp, *ofp;
    char buf[BUF_MAX], *res;
    int rows, cols,
            row = -1, col = -1,   // Negative values signals no more
    r, c;                 // entries in sparse representation.
    double value;

    // Open files:
    ifp = fopen(matrix_in_file_name, "r");
    ofp = fopen(matrix_out_file_name, "w");

    // Handle dimensions:
    fgets(buf, BUF_MAX, ifp);
    fputs(buf, ofp);

    // Extract number of rows and number of colums:
    sscanf(buf, "%d %d", &rows, &cols);

    // Get first entry. Assign row, col and value.
    res = fgets(buf, BUF_MAX, ifp);
    if (res != NULL)
        sscanf(buf, "%d %d %lf", &row, &col, &value);
    else {row = -1; col = -1;}

    // Generate all entries, in a double for loop.
    // Read from sparse matrix along the way:
    for (r = 1; r <= rows; r++){
        for (c = 1; c <= cols; c++){
            if (r == row && c == col){
                fprintf(ofp, "%f ", value);

                // Get next entry:
                if (res != NULL) res = fgets(buf, BUF_MAX, ifp);
                if (res != NULL)
                    sscanf(buf, "%d %d %lf", &row, &col, &value);
                else {row = -1; col = -1;}
            }
            else fprintf(ofp, "%f ", 0.0);
        }
        fprintf(ofp, "\n");
    }

    // Close files:
    fclose(ifp);
    fclose(ofp);
}

int main(void) {
    normal_matrix_to_sparse_matrix("m1.dat", "ms.dat");
    sparse_matrix_to_normal_matrix("ms.dat", "m2.dat");
}