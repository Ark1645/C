// 4.(b) Write a program to check if a number is prime or not.
#include<stdio.h>
int main(){
    int c=1,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
            printf("%d is not a prime number\n",n);
            c=0;
            break;
        }
    }
    if(c==1){
        printf("%d is a prime number\n",n);
    }
    return 0;
}