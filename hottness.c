// 5.(c) Write a function to print "Hot" or "Cold" depending on the temperature user enters.
#include<stdio.h>
void Temperature(float t){
    if(t>=30.0){
        printf("Hot\n");
    }
    else{
        printf("Cold\n");
    }
}
int main(){
    float temp;
    printf("Enter the temperature: ");
    scanf("%f",&temp);
    Temperature(temp);
    return 0;
}