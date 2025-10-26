#include<stdio.h>

float avg(int x, int y, int z);

float avg(int x, int y, int z){
    return (x + y + z) / 3.0;
}

int main(){
    int x, y, z;
    printf("Enter the first number: ");
    scanf("%d", &x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Enter the third number: ");
    scanf("%d", &z);
    printf("The average of numbers you entered is %f" ,avg(x, y, z));
    return 0;
}