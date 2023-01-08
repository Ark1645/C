// 6.(a) Write a program in C to find the maximum number between two numbers using a pointer.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    int *p=&a, *q=&b;
    if(*p>*q){
        printf("Maximum is %d\n",*p);
    }
    else if(*p<*q){
        printf("Maximum is %d\n",*q);
    }
    else{
        printf("Both the numbers are equal\n");
    }
    return 0;
}