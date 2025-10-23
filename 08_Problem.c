#include<stdio.h>

int main(){
    int n = 1;
    int a;
    printf("Enter any number: ");
    scanf("%d" ,&a);
    for (int i = 1; i <= a; i++){
        n *= i;
    }
    printf("The factorial of the number you entered is: %d \n" ,n);
    return 0;
}