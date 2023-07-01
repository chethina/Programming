#include<stdio.h>

int main(){
    int n,s,pn;

    printf("Please enter the number you want to end sequence with \n");
    scanf("%i",&s);
    pn=0;
    n=1;
    while(n<=s){
        
        printf("%i ",n);
        pn=n+pn;
        n=pn;
        
    }

    return 0;
}