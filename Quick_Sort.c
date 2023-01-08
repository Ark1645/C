#include<stdio.h>
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int ar[], int low, int high){
    int pivot=ar[high];
    int i=(low-1);
    for(int j=low;j<high;j++){
        if(ar[j]<=pivot){
            i++;
            swap(&ar[i], &ar[j]);
        }
    }
    swap(&ar[i+1], &ar[high]);
    return (i+1);
}
void quicksort(int ar[], int low, int high){
    if(low<high){
        int pi=partition(ar, low, high);
        quicksort(ar, low, pi-1);
        quicksort(ar, pi+1, high);
    }
}
void printArray(int ar[], int size){
    for(int i=0;i<size;i++){
        printf("%d ",ar[i]);
    }
    printf("\n");
}
int main(){
    int size,i;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int data[size];
    printf("Enter %d elements in array: ",size);
    for(i=0;i<size;i++){
        scanf("%d",&data[i]);
    }
    printf("Unsorted Array is: ");
    printArray(data, size);
    quicksort(data, 0, size-1);
    printf("Sorted Array is: ");
    printArray(data, size);
    printf("Quick Sort Completed\n");
    return 0;
}