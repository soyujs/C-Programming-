#include<stdio.h>

int main(){
    int n = 0;
    for (int i = 1; i <= 10; i++){
        n += (8 * i);
    }
    printf("The sum the table of 8 is %d" ,n);
    return 0;
}