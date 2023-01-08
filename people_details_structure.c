#include<stdio.h>
typedef struct Address{
    int hno;
    int block;
    char city[100];
    char state[100];
}add;
int main(){
    add p1={1,2,"Noida","Uttar Pradesh"};
    add p2={5,2,"Dehradun","Uttarakhand"};
    add p3={3,1,"Gaya","Bihar"};
    add p4={4,3,"Ranchi","Jharkhand"};
    add p5={2,5,"Koderma","Jharkhand"};
    printf("Address 1: House No-%d, Block-%d, City-%s, State-%s\n",p1.hno,p1.block,p1.city,p1.state);
    printf("Address 2: House No-%d, Block-%d, City-%s, State-%s\n",p2.hno,p2.block,p2.city,p2.state);
    printf("Address 3: House No-%d, Block-%d, City-%s, State-%s\n",p3.hno,p3.block,p3.city,p3.state);
    printf("Address 4: House No-%d, Block-%d, City-%s, State-%s\n",p4.hno,p4.block,p4.city,p4.state);
    return 0;
}

