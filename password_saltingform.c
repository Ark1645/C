#include<stdio.h>
#include<string.h>
int main(){
    char pass[100],salt[100]="123",newpass[100];
    printf("Enter your password: ");
    scanf("%s",pass);
    strcpy(newpass,pass);
    strcat(newpass,salt);
    printf("The salted form of password is %s\n",newpass);
    return 0;
}