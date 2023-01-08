// 5.(b) Write a function to find the square root of a number.
#include<stdio.h>
#include<math.h>
void Squareroot(int n){
    float sq=sqrt(n);
    printf("Square root of %d is %f\n",n,sq);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Squareroot(n);
    return 0;
}