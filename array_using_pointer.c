#include<stdio.h>
int main(){
    int mark[5],i;
    int *ptr=&mark[0];
    for(i=0;i<5;i++){
        printf("Enter the element at index %d: ",i);
        scanf("%d",ptr+i);
    }
    for(i=0;i<5;i++){
        printf("Element at Index %d = %d\n",i,*ptr);
        ptr=ptr+1;
    }
    return 0;
}