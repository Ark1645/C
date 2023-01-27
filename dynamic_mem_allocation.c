#include<stdio.h>
#include<stdlib.h>
int main(){
    float* ptr;
    ptr=(float*)malloc(5*sizeof(float));
    ptr[0]=34.2;
    ptr[1]=12.7;
    ptr[2]=56.4;
    ptr[3]=89.9;
    ptr[4]=54.1;
    for(int i=0;i<5;i++){
        printf("%f\n",ptr[i]);
    }
    return 0;
}