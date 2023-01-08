#include<stdio.h>
void Count(int ar[],int n){
    int i,c=0;
    for(i=0;i<n;i++){
        if(ar[i]%2!=0){
            c=c+1;
        }
    }
    printf("The number of odd elements in the above array is: %d\n",c);
}
void printArray(int ar[], int n){
    printf("The required array is: ");
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d elements in the array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    Count(ar,n);
    printArray(ar,n);
    return 0;
}