#include<stdio.h>
void square(int n);
void sqrtptr(int *n);
int main(){
    int num=4;
    square(num);
    printf("Number =%d\n",num);
    sqrtptr(&num);
    printf("Number = %d\n",num);
    return 0;
}
void square(int n){
    n=n*n;
    printf("Square= %d\n",n);
}
void sqrtptr(int *n){
    *n=(*n) * (*n);
    printf("Square= %d\n",*n);
}