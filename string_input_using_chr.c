#include<stdio.h>
int main(){
    int n,i=0;
    /*printf("Enter the length of string: ");
    scanf("%d",&n);*/
    char str[100];
    char ch;
    printf("Enter a string: ");
    while(ch!='\n'){
        scanf("%c",&ch);
        str[i++]=ch;
    }
    str[i]='\0';
    printf("The required string is: %s\n",str);
    return 0;
}