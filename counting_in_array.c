// 7.(a) In an array of numbers, find how many times does a number 'x' occurs.
#include<stdio.h>
int main(){
    int i,ele,count=0,n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int ar[n];
    printf("Enter %d elements in array: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    printf("Enter an element whose occurence you want to see: ");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(ar[i]==ele){
            count=count+1;
        }
    }
    printf("%d occurs %d times\n",ele,count);
    return 0;
}