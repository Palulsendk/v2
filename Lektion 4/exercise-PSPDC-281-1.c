#include <stdio.h>

/*
 There are 9870 people in a town whose population increases by 10% each year.
 Write a loop that displays the annual population and determines how many years (count_years) it will take for the population
 to surpass 30000.
 */
int main(void){
    int people = 9870;
    int count_years = 0;
    int surpass = 30000;
    int increase = 110;

    while (people < surpass){
        people = people * increase / 100;
        count_years++;

    }


    printf("years: %d", count_years);

    return 0;
}
