#include<stdio.h>
#include<string.h>
struct student{
    char name[100];
    int roll;
    float cgpa;
};
int main(){

    //FOR DYNAMIC DATA INPUT

    // int i,n;
    // printf("Enter the number of data you want: ");
    // scanf("%d",&n);
    // struct student s[n];
    // for(i=0;i<n;i++){
    //     printf("Enter the data for student %d ",i+1);
    //     scanf("%s%d%f",s[i].name,&s[i].roll,&s[i].cgpa);
    // }
    // printf("The data of following Students are here below\n");
    // for(i=0;i<n;i++){
    //     printf("%s %d %f\n",s[i].name,s[i].roll,s[i].cgpa);
    // }

    //FOR STATIC DATA INPUT

    // struct student s1;
    // strcpy(s1.name,"Mayank");
    // s1.roll=128;
    // s1.cgpa=9.4;
    // printf("Student 1 name %s\n",s1.name);
    // printf("Student 1 roll %d\n",s1.roll);
    // printf("Student 1 cgpa %f\n",s1.cgpa);
    // printf("\n");
    // struct student s2;
    // strcpy(s2.name,"Raunak");
    // s2.roll=25;
    // s2.cgpa=9.6;
    // printf("Student 2 name %s\n",s2.name);
    // printf("Student 2 roll %d\n",s2.roll);
    // printf("Student 2 cgpa %f\n",s2.cgpa);
    // printf("\n");
    // struct student s3;
    // strcpy(s3.name,"Rashi");
    // s3.roll=112;
    // s3.cgpa=9.5;
    // printf("Student 3 name %s\n",s3.name);
    // printf("Student 3 roll %d\n",s3.roll);
    // printf("Student 3 cgpa %f\n",s3.cgpa);

    //FOR SINGLE LINE INITIALISATION OF STRUCTURES

    struct student s1={"Mayank",128,9.5};
    struct student s2={"Raunak",25,9.7};
    struct student s3={"Rashi",113,9.6};
    printf("%s %d %f\n",s1.name,s1.roll,s1.cgpa);
    printf("%s %d %f\n",s2.name,s2.roll,s2.cgpa);
    printf("%s %d %f\n",s3.name,s3.roll,s3.cgpa);

    //PRINTING ADDRESS OF DATA IN STRUCTURES USING POINTER

    struct student *ptr1=&s1,*ptr2=&s2;
    printf("Address of Student name: %d\n",&s2.name);
    printf("Address of Student roll: %d\n",&s2.roll);
    printf("Address of Student cgpa: %d\n",&s2.cgpa);

    //PRINTING DATA IN STRUCTURES USING POINTER

    // printf("Student 1 name: %s\n",(*ptr1).name);
    // printf("Student 1 roll: %d\n",(*ptr1).roll);
    // printf("Student 1 cgpa: %f\n",(*ptr1).cgpa);

    //USING ARROW OPERATOR

    printf("Student 2 name: %s\n",ptr2->name);
    printf("Student 2 roll: %d\n",ptr2->roll);
    printf("Student 2 cgpa: %f\n",ptr2->cgpa);
    return 0;
}