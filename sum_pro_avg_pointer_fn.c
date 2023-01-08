#include<stdio.h>
void Sum_Pro_Avg(int a, int b, int *sum, int *pro, float *avg){
    *sum=a+b;
    *pro=a*b;
    *avg=(float)(a+b)/2;
}
int main(){
    int a,b,sum,pro;
    float avg;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    Sum_Pro_Avg(a,b,&sum,&pro,&avg);
    printf("Sum=%d Product=%d and Average=%f\n",sum,pro,avg);
    return 0;
}