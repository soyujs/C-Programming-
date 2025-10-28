#include<stdio.h>

int main(){
    char a = 'A';
    char* b = &a;
    int c = 45;
    int* d = &c;
    printf("The address of a is %p \n", &a);
    printf("The value of a is %d \n", *b);
    printf("The address of c is %p \n", &c);
    printf("The value os c is %d \n", *d);
    return 0;
}