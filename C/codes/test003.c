#include<stdio.h>

int main(){
    int y, x;
    y = 10;
    x = 0;
    printf("x = %i", x);
    printf("\ny = %i", y);
    x = --y;
    printf("\nx = %i", x);
    x = y--;
    printf("\nx = %i", x);
}