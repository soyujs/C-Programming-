#include<stdio.h>

int main(){
    char ch = 'A';
    printf("The character you entered is %c \n" ,ch);
    printf("The value of the character you entered is %d \n" ,ch);
    if (ch >= 97 && ch <= 122){
        printf("The character you entered is lower case character");
    }
    else {
        printf("The character you entered is not a lower case character");
    }
    return 0;
}