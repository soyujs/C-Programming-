#include<stdio.h>

int main(){
    int a;
    printf("Enter your monthly salary: ");
    scanf("%d" ,&a);
    if (a < 250000){
        printf("You dont have to pay any tax");
    }
    else if (a > 250000 && a < 500000){
        printf("You need to pay 5 percent tax from your salary");
    }
    else if (a > 500000 && a < 1000000){
        printf("You need to pay 20 percent tax from your salary");
    }
    else if (a > 1000000){
        printf("You need to pay 30 percent tax from your salary");
    }
    return 0;
}