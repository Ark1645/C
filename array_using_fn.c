#include<stdio.h>
void printArr(int arr[], int n){
    printf("The required array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int n;
    int ar[]={2,27,32,12,71,9};
    n=sizeof(ar)/sizeof(ar[0]);
    printArr(ar, n);
    printf("The size of array is: %d \n",n);
    return 0;
}