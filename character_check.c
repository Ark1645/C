#include<stdio.h>
void Checkchar(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            printf("The given character is present\n");
            return;
        }
    }
    printf("Character not found\n");
    return;
}
int main(){
    char str[100],ch;
    printf("Enter a string: ");
    fgets(str,100,stdin);
    printf("Enter the character to be searched: ");
    scanf("%c",&ch);
    Checkchar(str,ch);
    return 0;
}