
#include<stdio.h>

int main(){
    int a ,b ,c;
    printf("Enter the marks of first subject: ");
    scanf("%d" ,&a);          
    printf("Enter the marks of second subject: ");
    scanf("%d" ,&b);
    printf("Enter the marks of third subject: ");
    scanf("%d" ,&c);
    if (a < 33 || b < 33 || c < 33){
        printf("You are failed");
    }
    else if ((a + b + c)/3){
        printf("You are passed");
    }
    else {
        printf("You are failed");
    }
    return 0;
}