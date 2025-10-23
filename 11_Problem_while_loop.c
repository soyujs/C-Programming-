#include<stdio.h>

int main(){
    int n, prime = 0;
    printf("Enter any number: ");
    scanf("%d" ,&n);
    if (n == 0 || n == 1){
        prime = 1;
    }
    else {
        int i = 2;
        while (i < n){
            if (n % i == 0){
            prime = 1;
            break;
            }
            i++;
        }
    }
    if (prime){
        printf("%d is not a prime number" ,n);
    }
    else {
        printf("%d is a prime number" ,n);
    }
    return 0;
}