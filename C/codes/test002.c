#include<stdio.h>

int main(){

int x = 8;
int y = 7;
x++;
printf("x = %i", x);
printf("\ny= %i", y);
x+= --y;
printf("\nx = %i", x);

}