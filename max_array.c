// 7.(b) Write a program to print the largest number in an array;
#include<stdio.h>
int main(){
    int n,i,max;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d elements in array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    max=ar[0];
    for(i=0;i<n;i++){
        if(max<ar[i]){
            max=ar[i];
        }
    }
    printf("Largest number in the array is %d\n",max);
    return 0;
} 