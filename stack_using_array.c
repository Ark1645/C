#include<stdio.h>
#include<stdlib.h>
#define MAX 7
int top=-1,stack[MAX];
void push();
void pop();
void display();
void main(){
    int ch;
    while(1){
        printf("\n***Stack Menu***\n");
        printf("\n1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("\nEnter your choice (1-4): ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Wrong choice\n");
        }
    }
}
void push(){
    int val;
    if(top==MAX-1){
        printf("Stack is Full\n");
    }
    else{
        printf("Enter element to push: ");
        scanf("%d",&val);
        top=top+1;
        stack[top]=val;
    }
}
void pop(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Deleted element is %d\n",stack[top]);
        top=top-1;
    }
}
void display(){
    int i;
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack is....\n");
        for(int i=top;i>=0;--i){
            printf("%d\n",stack[i]);
        }
    }
}