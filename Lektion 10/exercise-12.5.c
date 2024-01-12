#include <stdio.h>
#include <stdlib.h>

struct fraction{
    unsigned int numerator;
    unsigned int denominator;
};
typedef struct fraction fraction;

void print_fraction(const fraction f);
fraction shorten(const fraction f);
fraction add_fractions(fraction f, fraction g);
fraction multiply_fractions(fraction f, fraction g);
fraction multiply_fraction_with_int(fraction f, unsigned int i);

unsigned int gcd(unsigned int large, unsigned int small);

int main(void) {
    fraction f1 = {50, 30},
            f2 = {12, 32},
            f3 = {1, 2};

    print_fraction(shorten(f1));
    print_fraction(add_fractions(f2, f3));
    print_fraction(add_fractions(f3, f3));
    print_fraction(multiply_fractions(f2, f3));
    print_fraction(multiply_fractions(f3, f3));
    print_fraction(multiply_fraction_with_int(f3, 4));

    return EXIT_SUCCESS;
}

/* Make and return a fraction with numerator and denominator */
fraction make_fraction(unsigned int numerator, unsigned int denominator){
    fraction result;
    result.numerator = numerator; result.denominator = denominator;
    return result;
}

/* Add two the fractions f and g, and return the sum */
fraction add_fractions(fraction f, fraction g){
    return shorten(make_fraction(f.numerator * g.denominator + g.numerator * f.denominator, f.denominator * g.denominator));
}

/* Multiply the two fractions f and g, and return the sum */
fraction multiply_fractions(fraction f, fraction g){
    return shorten(make_fraction(f.numerator * g.numerator, f.denominator * g.denominator));
}

/* Multiply the fraction f and i and return the product. */
fraction multiply_fraction_with_int(fraction f, unsigned int i){
    return multiply_fractions(f, make_fraction(i, 1));
}

/* Return the greatest common divisor of large and small. Assume that large is greater than small. */
unsigned int gcd(unsigned int large, unsigned int small){
    unsigned int remainder;
    while (small > 0){
        remainder = large % small;
        large = small;
        small = remainder;
    }
    return large;
}

/* Print the fraction f on standard output */
void print_fraction(const fraction f){
    if (f.denominator == 1)
        printf("%u\n", f. numerator);
    else
        printf("%u/%u\n", f. numerator, f.denominator);
}

/* Shorten f as much as possible, and return the shortened fraction */
fraction shorten(const fraction f){
    unsigned int factor = gcd(f.numerator, f.denominator);
    fraction result;

    result.numerator = f.numerator /factor;
    result.denominator = f.denominator /factor;

    return result;
}