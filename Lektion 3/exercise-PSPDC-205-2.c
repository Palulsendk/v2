#include <stdio.h>

/*
i Problem Solving and Program Design in C, eighth edition.
 Du må ikke bruge if-else kontrolstruturer eller betingede udtryk i løsningen af denne opgave. Variablene between, divisor og lowercase
 bør kun optræde én gang i de respektive assignment statements. (Hvis du har 7. udgave af bogen, hedder variablene noget andet
 - men ideen med opgaven er den samme i de to udgaver af bogen).
Write assignment statements for the following

a. Assign a value of 0 to between if n is less than -k or greater than +k; otherwise assign 1
b. Assign a value of 1 to divisor if digit is a divisor of num; otherwise assign a value of 0
c. Assign a value of 1 to lowercase if ch is a lowercase letter; otherwise, assign a value of 0
 */

int main(void) {

    //a
    int n = 5;
    int k = 7;
    int between = (n < -k || n > k) * 0 + (n>= -k && n <= k) * 1;

    printf("Between: %d", between);

    //b
    int num = 15;
    int digit = 4;
    int divisor = (num % digit == 0) * 1 + (num % digit != 0) * 0;

    printf("\nDivisor: %d", divisor);

    //c
    char ch = 'A';  // Replace 'A' with the actual value of ch
    int lowercase = (ch >= 'a' && ch <= 'z') * 1 + (ch < 'a' || ch > 'z') * 0;

    printf("\nLowercase: %d", lowercase);




}