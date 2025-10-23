#include<stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    } while (i <= 10);
    printf("The sum of first 10 natural numbers is: %d \n" ,sum);
    int b = 0;
    for (int i = 1; i <= 10; i++)
    {
        b += i;
    }
    printf("The sum of first 10 natural numbers is: %d \n" ,b);
    return 0;
}