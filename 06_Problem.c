#include<stdio.h>

int sumNatural(int);

int sumNatural(int n){
    if (n == 1){
        return 1;
    }
    return sumNatural(n - 1) + n;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The sum of the natural number %d is %d", n, sumNatural(n));
    return 0;
}