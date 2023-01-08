#include<stdio.h>
void printAddress(int n){ //Call By Value
    printf("%u\n",&n);
}
void Addressprint(int *n){ //Call By Reference
    printf("%u\n",n);
}
int main(){
    int n=6;
    printf("%u\n",&n);
    printAddress(n);
    Addressprint(&n);
    return 0;
}