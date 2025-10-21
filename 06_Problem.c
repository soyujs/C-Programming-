#include<stdio.h>

int main(){
    int a, b, c, d;
    printf("Enter a number: ");
    scanf("%d" ,&a);
    printf("Enter a number: ");
    scanf("%d" ,&b);
    printf("Enter a number: ");
    scanf("%d" ,&c);
    printf("Enter a number: ");
    scanf("%d" ,&d);
    if (a > b && a > c && a > d){
        printf("The greatest number you entered is %d" ,a);
    }
    else if (b > a && b > c && b > d){
        printf("The greatest number you entered is %d" ,b);
    }
    else if (c > a && c > b && c > d){
        printf("The greatest number you entered is %d" ,c);
    }
    else {
        printf("The greatest number you entered is %d" ,d);
    }
    return 0;
}