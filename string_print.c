//Create a String Firstname and Lastname to store the details of user and print all the characters using a loop.
#include<stdio.h>
void printString(char ar[]){
    for(int i=0;ar[i]!='\0';i++){
        printf("%c",ar[i]);
    }
}
int main(){
    char Firstname[]="Mayank";
    char Lastname[]="Kumar";
    printString(Firstname);
    printString(Lastname);
    return 0;
}