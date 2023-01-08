// 6.(c) Write a program in C to print all the letters in English Alphabet using a pointer.
#include<stdio.h>
int main(){
    char i;
    char *ptr;
    for(i='A';i<='Z';i++){
        ptr=&i;
        printf("%c ",*ptr);
    }
    printf("\n");
    return 0;
}