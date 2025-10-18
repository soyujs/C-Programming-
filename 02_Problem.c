#include<stdio.h>

int main(){
    int r, h;
    printf("Enter the radius: ");
    scanf("%d" ,&r);
    printf("Enter the height: ");
    scanf("%d" ,&h);
    printf("Area of the circle is %f \n",3.14*r*r);
    printf("Volume of a cylinder is %f" ,3.14*r*r*h);
    return 0;
}