#include<stdio.h>

int main(){
    int i = 72;
    int * j = &i;
    printf("The address of i is %p \n", &i);
    printf("The address of i stored in j is %p \n", j);
    printf("The value at address j is %d \n", *(&i));
    return 0;
}