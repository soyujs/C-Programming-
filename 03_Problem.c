#include<stdio.h>

int val(int*);

int val(int* a){
    *a = *a * 30;
}

int main(){
    int x = 45;
    printf("The value of x is %d \n", x);
    val(&x);
    printf("The value of x is %d", x);
    return 0;
}