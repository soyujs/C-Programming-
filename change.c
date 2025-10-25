#include<stdio.h>

int change(int a);

int change(int a){
    a = 77;
    return 0;
}

int main(){
    int b = 22;
    change(b);
    printf("The value of b is %d", b);
    return 0;
}