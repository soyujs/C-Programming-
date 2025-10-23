#include<stdio.h>

int main(){
    int n, prime = 0;
    printf("Enter any number: ");
    scanf("%d" ,&n);
    if (n == 0 || n == 1){
        prime = 1;
    }
    else {
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            prime = 1;
            break;
        }
    }
    }
    if (prime){
            printf("The number you entered is not a prime number \n");
        }
        else {
            printf("The number you entered is a prime number \n");
        }
    return 0;
}