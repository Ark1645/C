// 2.(c) Write a program to print the smallest number of two.
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("%d\n",a);
    }
    else{
        printf("%d\n",b);
    }
    return 0;
}