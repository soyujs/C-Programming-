#include<stdio.h>

int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d" ,&a);
    if (a > 60){
        printf("You can drive but you are a senior citizen");
    }
    else if (a > 18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive, you are small to drive");
    }
    return 0;
}