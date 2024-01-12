#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[30];
    int max_speed;
    int horse_power;
    int acceleration;
    int ccm;
} car_t;

void print_car(car_t car);

car_t load_car(void);

int main(void) {
    car_t c1 = {"Lotus", 200, 110, 8, 1973};
    car_t c2 = {"Mercedes", 215, 160, 9, 4520};
    car_t cars[] = {c1, c2};

    print_car(c1);
    printf("\n");
    print_car(c2);
    printf("\n");

    //car_t my_car = load_car();

    //print_car(my_car);

    return 0;
}

void print_car(car_t car) {
    printf("Name: %s\n", car.name);
    printf("Top speed: %d\n", car.max_speed);
    printf("HK: %d\n", car.horse_power);
    printf("Acceleration: %d\n", car.acceleration);
    printf("CCM: %d\n", car.ccm);
}

car_t load_car(void) {
    car_t new_car;

    printf("Tast brand navn:");
    scanf(" %s", new_car.name);
    printf("Tast max fart:");
    scanf(" %d", &new_car.max_speed);
    printf("Tast horse power:");
    scanf(" %d", &new_car.horse_power);
    printf("Tast acceleration:");
    scanf(" %d", &new_car.acceleration);
    printf("Tast ccm:");
    scanf(" %d", &new_car.ccm);

    return new_car;
}
