#include<stdio.h>
typedef struct BankInformation{
    char name[100];
    long long ac_no;
}bifo;
int main(){
    bifo d1={"Mayank Kumar",10968010468};
    bifo d2={"Raunak Kumar",40812509875};
    printf("Account holder details are \n");
    printf("Customer1: Name- %s | A/c No.- %lli\n",d2.name,d2.ac_no);
    return 0;
}