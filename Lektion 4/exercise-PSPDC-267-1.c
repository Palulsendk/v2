#include <stdio.h>
int main(void){

    int n;
    int new = 0;

    printf("Enter a value for n: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        new += i;

    }
    if(new == (n * (n + 1 )) / 2){
        printf("These are the same");

    }else{
        printf("These are not the same");
    }


    return 0;
}
