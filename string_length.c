#include<stdio.h>
#include<string.h>
int main(){
    //Without Function
    int len=0;
    char name[100];
    printf("Enter your name: ");
    fgets(name, 100, stdin);
    for(int i=0;name[i]!='\0';i++){
        len=len+1;
    }
    puts(name);
    printf("%d\n",len-1);
    //By using Predefined function
    char str[100];
    printf("Enter another name: ");
    fgets(str,100,stdin);
    int l=strlen(str);
    printf("Length is %d\n",l);
    return 0;
}