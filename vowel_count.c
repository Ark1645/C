#include<stdio.h>
void VowelCount(char str[]){
    int i,count=0;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    printf("Number of vowels are %d\n",count);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    VowelCount(str);
    return 0;
}