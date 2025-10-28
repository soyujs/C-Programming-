#include<stdio.h>

int main(){
    char i = 'A';
    char * j = &i;
    printf("The address of i is %p \n", &i);
    printf("The address of i stored in j is %p \n", j);
    printf("The value at address j is %d \n", *(&i));
    return 0;
}