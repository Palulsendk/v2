#include <stdio.h>

int main(void){

    int n = 0;
    int sum = 0;

    printf("Insert value for n: ");
    scanf("%d", &n);

    // For loop
    if(n > 0){
        for (int i = n; i <= 2*n; ++i) {
            sum += i;
        }
    }else{
        for (int i = 2*n; i <= n; ++i) {
            sum += i;
        }
    }


    printf("For-loop: %d", sum);



    return 0;
}
