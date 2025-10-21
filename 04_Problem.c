#include<stdio.h>

int main(){
    int a;
    printf("Enter any year: ");
    scanf("%d" ,a);
    if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0){
        printf("The year you entered is a leap year");
    }
    else {
        printf("The year you entered is not a leap year");
    }
    return ;
}