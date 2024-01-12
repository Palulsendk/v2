#include <stdio.h>

#define NUMBER_OF_GOODS 10

void print_prices(int p[], int number_of_items);
int calculate_total_price(int prices[], int number_of_items);

int main(void) {
    int prices[NUMBER_OF_GOODS];
    int price;

    for (int i = 0; i < NUMBER_OF_GOODS; ++i) {
        printf("Indtast pris>");
        scanf(" %d", &price);
        prices[i] = price;
    }

    print_prices(prices, NUMBER_OF_GOODS);

    int total_price;
    total_price = calculate_total_price(prices, NUMBER_OF_GOODS);
    printf("Total price is: %d", total_price);

    return 0;
}

int calculate_total_price(int prices[], int number_of_items) {
    int sum = 0;
    for (int i = 0; i < number_of_items; ++i) {
        sum += prices[i];
    }
    return sum;
}

void print_prices(int p[], int number_of_items) {
    for (int i = 0; i < number_of_items; ++i) {
        printf("Price of item %d is %d\n", i, p[i]);
    }
}
