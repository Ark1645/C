#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the number of terms(>2): ");
    scanf("%d",&n);
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("The first %d terms of this Fibonacci Series are as follows \n: ",n);
    for(i=0;i<n;i++){
        printf("%d ",fib[i]);
    }
    printf("\n");
    return 0;
}
