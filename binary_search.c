#include<stdio.h>
int BinarySearch(int ar[],int x,int low,int high){
    while(low<=high){
        int mid=low+(high-low)/2;
        if(ar[mid]==x){
            return mid;
        }
        else if(ar[mid]<x){
            low=mid+1;;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int ar[]={2,4,9,12,15,17};
    int n=(sizeof(ar))/sizeof(ar[0]);
    int ele =12;
    int result=BinarySearch(ar,ele,0,n-1);
    if(result==-1){
        printf("Element not found\n");
    }
    else{
        printf("Element found\n");
    }
    return 0;
}