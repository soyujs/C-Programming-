#include<stdio.h>

float force(int m, int g);

float force(int m, int g){
    return m * 9.8;
}

int main(){
    float m, g = 9.8;
    printf("Enter the mass: ");
    scanf("%f", &m);
    printf("The force exerted by mass %.0f and gravity %.1f is %.2f", m, g, force(m, g));
    return 0;
}