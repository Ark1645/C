// 7.(c) Write a program to insert an element at the end of an array.
#include<stdio.h>
#include<string.h>
int main(){
    int ar[100];
    int n,i,ele;
    printf("Enter how many elements you want: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter the element you want to insert: ");
    scanf("%d",&ele);
    ar[n]=ele;
    printf("The modified array is: ");
    for(i=0;i<=n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    return 0;
}
