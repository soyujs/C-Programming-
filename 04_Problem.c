#include<stdio.h>

int main(){
    int p, t, r, s;
    printf("Enter the principle: ");
    scanf("%d" ,&p);
    printf("Enter the rate of intrest: ");
    scanf("%d" ,&r);
    printf("Enter the time: ");
    scanf("%d" ,&t);
    printf("The simple intrest is %d" ,(p*t*r)/100);
    return 0;
}