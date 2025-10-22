#include<stdio.h>

int main(){
    for(int i = 0; i <= 15; i++){
        if (i == 10){
            break;
        }
        if (i == 5){
            continue;
        }
        printf("The value of i is %d \n" ,i);
    }
    return 0;
}