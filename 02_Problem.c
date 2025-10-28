#include<stdio.h>

int add(int* b){
    printf("The value of a is %d", *b);
    return 0;
}

int main(){
    int a = 2;
    int* b = &a;
    printf("The address of a is %p \n", &a);
    add(b);
    return 0;
}