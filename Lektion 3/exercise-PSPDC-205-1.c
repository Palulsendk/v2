#include <stdio.h>

/*Write an expression to test for each of the following relationships.

age is from 18 to 21 inclusive
water is less than 1.5 and also greater than 0.1
year is divisible by 4. (Hint: Use %)
speed is not greater than 55
y is greater than x and no less than z
w is either equal to 6 or not greater than
*/

int main(void) {
    int age = 20;
    double water = 1.5;
    int year = 2024;
    int speed = 50;
    int  x = 5, y = 10, z = 5;
    int w = 6;

    //age is from 18 to 21 inclusive
    if(age >= 18 && age <=21){
        printf("You above 18 and under or 21!\n");
    }else{
        printf("You not between 18 and 21!\n");
    }
    //water is less than 1.5 and also greater than 0.1
    if(water >= 0.1 && water <= 1.5){
        printf("Water is greater than 0.1 and less/equal than 1.5\n");
    }else{
        printf("Water is either less than 0.1 or greater than 1.5\n");
    }
    //year is divisible by 4. (Hint: Use %)
    if(year % 4 == 0){
        printf("The year is dividable by 4!\n");
    } else{
        printf("The year is not dividable by 4!\n");
    }
    //speed is not greater than 55
    if(speed <= 55){
        printf("Speed is not greater than 55\n");
    }else{
        printf("You're driving to fast! No less than 55\n");
    }
    //y is greater than x and no less than z
    if(y > x && y >= z){
        printf("'y' is greater than 'x' and no less than z");
    }else{
        printf("'y' is either not greater than x or less than z");
    }
    //w is either equal to 6 or not greater than
    if(w == 6){
        printf("'w' is equal to 6");
    }else{
        printf("'w' is not equal to 6");
    }




}