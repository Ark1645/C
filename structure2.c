#include<stdio.h>
//USE OF TYPEDEF OPERATOR
typedef struct AddressDetails{
    int hno;
    int blk;
    char city[100];
    char state[100];
 }adl;
 int main(){
    adl d1={12,5,"Dehradun","Uttarakhand"}; //To avoid writing long statement, "struct AddressDetails d1={"Delhi",100011}", typedef is used.
    adl d2={6,3,"Mumbai","Maharashtra"}; 
    adl d3={2,14,"Gaya","Bihar"};
    adl d4={1,7,"Koderma","Jharkhand"};
    adl d5={2,1,"Malda","West Bengal"};
    adl d6={3,3,"Ranchi","Jharkhand"};
    printf("Data 1: %d %d %s %s\n",d1.hno,d1.blk,d1.city,d1.state);
    printf("Data 2: %d %d %s %s\n",d2.hno,d2.blk,d2.city,d2.state);
    printf("Data 3: %d %d %s %s\n",d3.hno,d3.blk,d3.city,d3.state);
    printf("Data 4: %d %d %s %s\n",d4.hno,d4.blk,d4.city,d4.state);
    printf("Data 5: %d %d %s %s\n",d5.hno,d5.blk,d5.city,d5.state);
    printf("Data 6: %d %d %s %s\n",d6.hno,d6.blk,d6.city,d6.state);
    return 0;
 }