// 1.(a) Write a program to calculate the perimeter of rectangle. Take sides, a & b, from the user.
#include<stdio.h>
int main(){
    int a,b,per;
    printf("Enter the length and breadth of rectangle: ");
    scanf("%d%d",&a,&b);
    per=2*(a+b);
    printf("Perimeter is: %d\n",per);
    return 0;
}