#include<stdio.h>

int main(){
    int n, np = 0;
    printf("Enter any number: ");
    scanf("%d" ,&n);
    if (n == 0 || n == 1){
        np = 1;
    }
    else {
        int i = 2;
        do{
            if (n % i == 0 && n != 2){
            np = 1;
            break;
            }
            i++;
        } while (i < n);
    }
    if (np){
        printf("%d is not a prime number" ,n);
        }
    else {
        printf("%d is a prime number" ,n);
    }
}