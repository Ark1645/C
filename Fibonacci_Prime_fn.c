#include<stdio.h>
void Fibo(int n){
    int a=0,c,b=1,i=1,k=1,len,flag,j,count;
    int prime[n];
    printf("The first %d terms of Fibonacci Series is ",n);
    while(i<=n){
        printf("%d ",a);
        if(a==2){
            prime[0]=2;
        }
        if(a>2){
            flag=0,j=2;
            for(j=2;j<a;j++){
                if(a%j==0){
                    flag=1;
                }
            }
            if(flag==0){
                prime[k]=a;
                k++;
            }
        }
        c=a+b;
        a=b;
        b=c;
        i++;
    }
    
    printf("\nThe Prime numbers in the above series is: ");
    for(i=0;i<k;i++){
        printf("%d ",prime[i]);
    }
}
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    Fibo(n);
    return 0;
}