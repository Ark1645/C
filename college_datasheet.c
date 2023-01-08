// 9. Make a system that can store information of all students, teachers and staffs of your college in the form of structures.
#include<stdio.h>
#include<string.h>
typedef struct Student_Data{
    char name[100];
    char roll[20];
    long long ph;
}std;
typedef struct Teacher_Data{
    char name[100];
    char post[50];
    char sub[50];
    long long ph;
}tcd;
int main(){
    std s1={"Mayank Kumar","CSE/21/128",7667839154};
    std s2={"Suvendu Samanta","CSE/21/119",7584987303};
    std s3={"Arijit Kumar Khanra","CSE/21/76",7679663690};
    std s4={"Anirban Mahapatra","CSE/21/066",9635280205};
    std s5={"Soubhik Banerjee","CSE/21/111",7362879659};
    std s6={"Sudip Ghosh","CSE/21/112",8927974461};
    tcd t1={"Aeishika Pal","Assistant Professor","Mathematics",8346886564};
    tcd t2={"Sukanta Samanta","Head of Department","Mathematics",9876543210};
    tcd t3={"Soumitra De","Assistant Professor","IT Workshop",9734431619};
    printf("Student Data:\n");
    printf("%s %s %lli\n",s1.name,s1.roll,s1.ph);
    printf("%s %s %lli\n",s2.name,s2.roll,s2.ph);
    printf("%s %s %lli\n",s3.name,s3.roll,s3.ph);
    printf("%s %s %lli\n",s4.name,s4.roll,s4.ph);
    printf("%s %s %lli\n",s5.name,s5.roll,s5.ph);
    printf("%s %s %lli\n",s6.name,s6.roll,s6.ph);
    printf("\nTeacher Data:\n");
    printf("%s %s %s %lli\n",t1.name,t1.post,t1.sub,t1.ph);
    printf("%s %s %s %lli\n",t2.name,t2.post,t2.sub,t2.ph);
    printf("%s %s %s %lli\n",t3.name,t3.post,t3.sub,t3.ph);
    return 0;
}