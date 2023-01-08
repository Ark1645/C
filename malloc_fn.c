#include<stdio.h>
#include<stdlib.h>
int main(){
    int i,a=12; 
    int* ptr;
    ptr=(int*)malloc(4*sizeof(int));
    for(i=0;i<4;i++){
        printf("Enter element at index %d: ",i);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<4;i++){
        printf("Element at index %d is: %d\n",i,ptr[i]);

    }
    return 0;
}