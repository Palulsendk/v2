#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct {
    char name[30];
    double radius;
    double volume;
    double mass;
} planet_t;

void print_planet(planet_t p);
void write_planets_to_file(planet_t* planets, int number_of_planets, FILE *fp);
void read_planets_from_file(planet_t* planets, int number_of_planets, FILE *fp);

int main(void) {
    planet_t planets[2] = {
            {"Earth", 12756/2, 1.08e12, 5.97e24},
            {"Mars", 6792/2, 1.63e11, 6.42e23}
    };

    print_planet(planets[0]);
    print_planet(planets[1]);

    return 0;
}

void write_planets_to_file(planet_t* planets, int number_of_planets, FILE *fp) {


}

void read_planets_from_file(planet_t* planets, int number_of_planets, FILE *fp) {


    // new_planet.volume = (4.0/3.0) * M_PI * pow(new_planet.radius,3);
}

void print_planet(planet_t p) {
    printf("Name: %s\n", p.name);
    printf("Volume: %lf\n", p.volume);
    printf("Mass: %lf\n", p.mass);
    printf("Radius: %lf\n", p.radius);
}
