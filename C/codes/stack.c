#include<stdio.h>
int stack[10];
int maxsize=8;
int top = -1;

int isEmpty(){
    if(top == -1){
        return 1;
    }else{
        return 0;
    }
}

int isFull(){
    if(top==maxsize){
        return 1;
    }else{
        return 0;
    }
}

int push(int data){
    int num;
    if(isFull()){
        top = top+1;
        stack[top] = data;
    }else{
        printf("The stack is full \n");
    }
}

int pop(){
    int data;
    if(isEmpty()){
        data = stack[top];
        top = top+1;
    }else{
        printf("The stack is empty \n");
    }
}

int peek(){
    return stack[top];
}

int main(){
    push(45);
    push(50);
    push(89);
    push(-10);
    push(0);
    push(120);

    int r = 0;
    while(r<8){
        printf("%i", stack[r]);
        r++;
    }

    return 0;
}