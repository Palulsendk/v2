#include <stdio.h>
#include <stdlib.h>

int* read_items(int number_of_items);
void print_prices(int* x, int number_of_items);

int main(void) {
    int number_of_items;
    // Prompt for number of items
    printf("Input number of items>");
    scanf(" %d", &number_of_items);

    // Get array of item prices
    int* prices = read_items(number_of_items);

    print_prices(prices, number_of_items);

    // Calculate total price
    double sum = 0;
    for(int i = 0; i <  number_of_items; ++i){
        sum = sum + prices[i];
    }
    printf("The total is: %lf\n", sum);

    // Remember to free our memory again
    free(prices);

    return 0;
}

int* read_items(int number_of_items) {
    int* prices = (int *)malloc(sizeof(int) * number_of_items);
    if (prices == NULL) {
        printf("Out of memory, :(\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < number_of_items; ++i) {
        printf("Input price of item number %d: ", i);
        scanf(" %d", &prices[i]);
    }
    return prices;
}

void print_prices(int *x, int number_of_items){
    int i;
    for(i = 0; i < number_of_items; ++i){
        printf("Item number %d: ", i);
        printf("%d\n", x[i]);
    }
}

