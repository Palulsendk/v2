#include <stdio.h>

int main(void) {
    int watts, brightness;

    printf("Enter Watts: ");
    scanf("%d", &watts);

    //Switch
    switch (watts) {
        case 15:
           brightness=125;
            break;
        case 25:
            brightness=215;
            break;
        case 40:
            brightness = 500;
            break;
        case 60:
            brightness = 880;
            break;
        case 75:
            brightness = 1000;
            break;
        case 100:
            brightness = 1675;
            break;
        default:
            brightness = -1;
    }

    if(brightness != -1){
        printf("For %d watts, the expected brightness is %d lumens.\n", watts, brightness);
    } else {
        printf("Invalid wattage. Lumens value could not be determined.\n");
    }


    // Nested if-statement
    if(watts == 15){
        brightness = 125;
    }else if(watts == 25){
        brightness = 215;
    }else if(watts == 40){
        brightness = 500;
    }else if(watts == 60){
        brightness = 880;
    }else if(watts == 75){
        brightness = 1000;
    }else if(watts == 100){
        brightness = 1675;
    }else{
        brightness = -1;
    }

    if(brightness != -1){
        printf("For %d watts, the expected brightness is %d lumens.\n", watts, brightness);
    } else {
        printf("Invalid wattage. Lumens value could not be determined.\n");
    }

    return 0;

}