// 1.(b) Take a number(n) from user and output its cube(n*n*n).
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Cube of %d is %d\n",n,n*n*n);
    return 0;
}