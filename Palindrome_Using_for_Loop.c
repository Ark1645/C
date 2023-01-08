#include<stdio.h>
int main(){
    int n,r,a,p=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(a=n;a>0;a/=10){
        r=a%10;
        p=p*10+r;
    }
    if(n==p){
        printf("%d is a Palindrome number\n",n);
    }
    else{
        printf("%d is not a Palindrome number\n",n);
    }
    return 0;
}