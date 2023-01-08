// 5.(a) Write a function to find the sum of digits of a number.
#include<stdio.h>
int digitsum(int n){
    int r,sum=0;
    while(n>0){
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int sum=digitsum(n);
    printf("Sum of digits of %d is %d\n",n,sum);
    return 0;
}