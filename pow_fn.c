// 5.(d) Make your own Power function.
#include<stdio.h>
void power(int n, int pow){
    int i,val=1;
     if(pow==0){
            printf("The output is %d\n",1);
    }
    else{
        for(i=1;i<=pow;i++){
            val=val*n;
        }
        printf("The output is %d\n",val);
    }
}
int main(){
    int n,pow;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the power of %d: ",n);
    scanf("%d",&pow);
    power(n,pow);
    return 0;
}
    
