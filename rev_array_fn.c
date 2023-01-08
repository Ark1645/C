// 6.(b) Write a program in C to print elements of an array in reverse order.
#include<stdio.h>
void Reverse(int ar[],int n){
    int t,i;
    for(i=0;i<n/2;i++){
        t=ar[i];
        ar[i]=ar[n-1-i];
        ar[n-1-i]=t;
    }
}
void PrintArray(int ar[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int ar[]={2,7,8,5,1};
    int n=sizeof(ar)/sizeof(ar[0]);
    printf("The original array is : ");
    PrintArray(ar,n);
    printf("The reverse of array is: ");
    Reverse(ar,n);
    PrintArray(ar,n);
    return 0;
}