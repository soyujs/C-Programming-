#include<stdio.h>

float farh(int c);

float farh(int c){
    return (c * 9 / 5) + 32;
}

int main(){
    float c;
    printf("Enter the celcius: ");
    scanf("%f", &c);
    printf("The farhneight of the celcius you entered is: %.2f", farh(c));
    return 0;
}