#include<stdio.h>

int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d" ,&a);
    if (a > 15){
        printf("Your age is greater than 15 \n");
    }
    else{
        printf("Your age is lesser than 15");
    }
    return 0;
}