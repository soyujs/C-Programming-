#include<stdio.h>

int main(){
    int a = 5;
    int b = 3;
    int c = 4;
    int d = a + b + c;
    int e = (a + b) * c;
    int f = (a * c) / b;
    int g = a % b;
    printf("The sum of %d, %d and %d is %d \n" ,a , b, c, d);
    printf("The sum of %d and %d hole multplied by %d is %d \n" ,a , b, c, e);
    printf("The result of %d multiplied by %d and hole divided by %d is %d \n" ,a ,c ,b, f);
    printf("The remainder of %d and %d is %d" ,a ,b , g);
    return 0;
}