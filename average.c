// 2.(a) Write a program to print the average of 3 numbers.
#include<stdio.h>
int main(){
    int a=42,b=23,c=65;
    float avg=(float)(a+b+c)/3;
    printf("Average of %d, %d and %d is %f\n",a,b,c,avg);
    return 0;
}