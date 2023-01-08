#include<stdio.h>
struct student{
    char name[100];
    int roll;
};
int main(){
    struct student s1={"Mayank",128};
    struct student s2={"Raunak",23};
    struct student *ptr1,*ptr2,*ptr3;
    ptr1=&s1;
    ptr2=&s2;
    printf("Student1 Roll is %d\n",ptr1->roll);
    printf("Student2 Name is %s\n",ptr2->name);
    ptr3->roll=12;
    printf("Pointer 3 %d\n",ptr3->roll);
    return 0;
}