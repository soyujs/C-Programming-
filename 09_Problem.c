#include<stdio.h>

int main(){
    int i = 1;
    int n = 1;
    int a = 8;
    while (i <= a)
    {
        n *= i;
        i++;
    }
    printf("The factorial of %d is %d" ,a ,n);
    return 0;
}