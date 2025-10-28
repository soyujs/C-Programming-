#include<stdio.h>

int sum(int*, int*);
int avg(int*, int*);

int sum(int* a, int* b){
    return *a + *b;
}
int avg(int* a, int* b){
    return (*a + *b) / 2;
}

int main(){
    int a = 2, b = 4;
    printf("The sum of 2 and 4 is %d \n", sum(&a, &b));
    sum(&a, &b);
    printf("The average of 2 and 4 is %d \n", avg(&a, &b));
    avg(&a, &b);
    return 0;
}