#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
void printInfo(struct student s1){
    printf("Student name: %s\n",s1.name);
    printf("Student roll: %d\n",s1.roll);
    printf("Student cgpa: %f\n",s1.cgpa);
}
int main(){
    struct student s1={"Mayank Kumar", 128, 9.6};
    printInfo(s1);
    return 0;
}