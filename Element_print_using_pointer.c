#include<stdio.h>
int main(){
    int ar[5]={2,7,12,1,9};
    printf("%d\n",*(ar+2));
    printf("%d\n",*(ar+5));
    return 0;
}