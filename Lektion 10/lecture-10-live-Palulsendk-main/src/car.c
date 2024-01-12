#include <stdio.h>
#include <string.h>

struct car_t {
    char name[30];
    int max_speed;
    int hk;
    int acceleration;
    int ccm;
};

struct car_t fastest_car(struct car_t car1, struct car_t car2);

void print_car(struct car_t bil);

struct car_t load_car(void);

int main(void) {
    struct car_t b1 = {"Lotus", 200, 110, 8, 1973};
    struct car_t b2 = {"Mercedes", 215, 160, 9, 4520};

    print_car(b1);
    printf("\n");
    print_car(b2);
    printf("\n");

    struct car_t fast = fastest_car(b1, b2);

    print_car(fast);

    struct car_t my_car = load_car();

    print_car(my_car);


    return 0;
}

void print_car(struct car_t bil) {
    //Hiv vaerdierne ud
    char *n = bil.name;
    int f = bil.max_speed;
    int hest = bil.hk;
    int a = bil.acceleration;
    int ccm = bil.ccm;

    //Print
    printf("\n Name: %s", n);
    printf("\n Top speed: %d", f);
    printf("\n HK: %d", hest);
    printf("\n Acceleration: %d", a);
    printf("\n CCM: %d\n", ccm);

}

struct car_t fastest_car(struct car_t car1, struct car_t car2) {
    int fart1 = car1.max_speed;
    int fart2 = car2.max_speed;

    if (fart1 > fart2) {
        return car1;
    } else {
        return car2;
    }
}

struct car_t load_car(void) {
    char name[30];
    int f;
    int hk;
    int acc;
    int ccm;

    //Indlæs fra tastatur.
    printf("Tast et navn: \n");
    scanf("%s", name);
    printf("Tast topfart:\n");
    scanf(" %d", &f);
    printf("Tast hestekrafter:\n");
    scanf(" %d", &hk);
    printf("Tast acceleration:\n");
    scanf(" %d", &acc);
    printf("Tast ccm:\n");
    scanf(" %d", &ccm);

    //Create car and add values
    struct car_t new_card;
    strcpy(new_card.name, name);
    new_card.max_speed = f;
    new_card.hk = hk;
    new_card.acceleration = acc;
    new_card.ccm = ccm;

    return new_card;
}
