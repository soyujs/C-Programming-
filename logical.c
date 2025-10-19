#include<stdio.h>

int main(){
    int a = 1;
    int b = 0;
    printf("The value of a and b is %d \n" ,a&&b);
    printf("The value of a or b is %d \n" ,a||b);
    printf("The value of not(a) is %d \n" ,!a);
    printf("The value of not(b) is %d \n" ,!b);
    if (a && b){
        printf("They are true");
    }
    else{
        printf("They are not true");
    }
    return 0;
}