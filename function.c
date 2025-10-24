#include <stdio.h>

int sum(int x, int y){
    printf("The sum of %d and %d is %d \n", x, y, x + y);
    return x+y;
}
int main(){
    int a = 2, b = 5;
    sum(a, b);

    int c = 10, d = 12;
    sum(c, d);

    return 0;
}