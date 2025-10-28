#include<stdio.h>

int main(){
    int i = 75;
    int* j = &i;
    int** k = &j;
    printf("The value of i is %d" ,*j);
    return 0;
}