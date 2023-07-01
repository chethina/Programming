#include <stdio.h>
int main (){
    char name[50]; //Declaration of a Character array
    int age; //Declaratino of a variable
    puts("Hi, Please enter your name"); //Display function 
    scanf("%s", &name); 
    puts("Please enter your age aswell");
    scanf("%i", &age); //The user input will be saved in the memory location of the variable 'age'
    printf("Hello %s. You are %i years old. Welcome to C Language",name,age);

    return 0;
}
