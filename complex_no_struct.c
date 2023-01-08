#include<stdio.h>
struct complex{
    int real;
    int img;
};
int main(){
    struct complex no1;
    printf("Enter components of complex no: ");
    scanf("%d%d",&no1.real,&no1.img);
    struct complex *ptr;
    ptr=&no1;
    printf("Real part is %d\n",ptr->real);
    printf("Imaginary part is %d\n",ptr->img);
    return 0;
}