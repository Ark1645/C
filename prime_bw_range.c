// 4.(c) Write a program to print prime numbers in a range.
#include<stdio.h>
int main(){
    int sr,er,n,i;
    printf("Enter the starting and ending range: ");
    scanf("%d%d",&sr,&er);
    printf("List of prime numbers between %d and %d are: ",sr,er);
    for(n=sr;n<=er;n++){
        int c=1;
        for(i=2;i<n;i++){
            if(n%i==0){
                c=0;
                break;
            }
        }
        if(c==1){
            printf("%d ",n);
        }
    }
    return 0;
}