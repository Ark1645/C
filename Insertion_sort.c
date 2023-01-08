//WRONG CODE
#include<stdio.h>
int main(){
    int n,i,j,t,k=1;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d elements in the array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(ar[i]>=ar[j]){
                t=ar[i];
                ar[i]=ar[j];
                ar[j]=t;
           }
        }
    }
    printf("Sorted array is: ");
    for(i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
    return 0;
}