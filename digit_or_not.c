// 2.(b) Write a program to check if a given character is a digit or not.
#include<stdio.h>
int main(){
    char ch;
    int i,f=0;
    printf("Enter a character: ");
    scanf("%c",&ch);
    char ar[]={'0','1','2','3','4','5','6','7','8','9'};
    for(i=0;i<10;i++){
        if(ch==ar[i]){
            printf("The given character is a digit\n");
            f=1;
            break;
        }
    }
    if(f==0){
        printf("The given character is not a digit\n");
    }
    return 0;
}