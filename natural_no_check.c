// 3.(b) Write a program to check if a given number is a natural number.
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n>0){
        printf("%d is a natural number\n",n);
    }
    else{
        printf("%d is not a natural number\n",n);
    }
    return 0;
}