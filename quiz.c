#include<stdio.h>

int main(){
    int a;
    printf("Enter the marks you got in your examination: ");
    scanf("%d" ,&a);
    if (a <= 100 && a >= 90){
        printf("You got A grade in your examination");
    }
    else if (a <= 90 && a >= 80){
        printf("You got B grade in your examination");
    }
    else if (a <= 80 && a >= 70){
        printf("You got C grade in your examination");
    }
    else if (a <= 70 && a >= 60){
        printf("You got D grade in your examination");
    }
    else if (a <= 60 && a >= 50){
        printf("You got E grade in your examination");
    }
    else{
        printf("You got F grade in your examination");
    }
    return 0;
}