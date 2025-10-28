#include<stdio.h>

int main(){
    int i = 2;
    int* a = &i;
    int** b = &a;
    printf("The address of i is %p \n", &i);
    printf("The value of i is %d \n", *a);
    printf("The value of i is %d \n", **b);
    return 0;
}