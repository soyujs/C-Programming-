#include<stdio.h>

int val(int);

int val(int a){
    a = a * 10;
}

int main(){
    int x = 45;
    printf("The value of x is %d \n", x);
    printf("The value of x is %d \n", x);
    return 0;
}