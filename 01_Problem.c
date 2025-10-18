#include<stdio.h>

int main(){
    int length, breath;
    printf("Enter the length: ");
    scanf("%d" ,&length);
    printf("Enter the breath: ");
    scanf("%d" ,&breath);
    printf("Area of the rectangle is %d" ,length*breath);
    return 0;
}