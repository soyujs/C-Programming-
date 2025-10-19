#include <stdio.h>

int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    if (a > 15){
        printf("Your age is greater than 15 \n");
    }
    if (a % 5 == 0){
        printf("Your age is divisible by 5 \n");
    }
    return 0;
}