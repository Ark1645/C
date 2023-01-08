#include<stdio.h>
// Call by value
void swap(int a, int b){
    int t=a;
    a=b;
    b=t;
    printf("a=%d and b=%d\n",a,b);
}
// Call by reference
void swap_ptr(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d and b=%d\n",*a,*b);
}
int main(){
    int x=5, y=9;
    swap(x,y);
    printf("x=%d and y=%d\n",x,y);
    swap_ptr(&x,&y);
    printf("x=%d and y=%d\n",x,y);
    return 0;
}