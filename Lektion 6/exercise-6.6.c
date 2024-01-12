#include <stdio.h>


int main(void) {

    double euro = 0.89;
    double kroner = 6.66;
    double rubler = 66.43;
    double yen = 119.9;

    // Euro
    for (int i = 0; i < 101; ++i) {
        double euroResult = i  * euro;
        printf("Dollars: %d to Euro: %.2lf\n", i, euroResult);
    }
    printf("\n");
    // Kroner
    for (int i = 0; i < 101; ++i) {
        double kronerResult = i * kroner;
        printf("Dollars: %d to Kroner: %.2lf\n", i, kronerResult);
    }
    printf("\n");
    // rubler
    for (int i = 0; i < 101; ++i) {
        double rublerResult = i * rubler;
        printf("Dollars: %d to Rubler: %.2lf\n", i, rublerResult);
    }
    printf("\n");
    //yen
    for (int i = 0; i < 101; ++i) {
        double yenResult = i * yen;
        printf("Dollars: %d to Yen: %.2lf\n", i, yenResult);

    }

    return 0;
}