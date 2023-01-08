#include<stdio.h>
void Slice(char str[],int n,int m){ //n and m are valid values
    char newstr[100];
    int j=0;
    for(int i=n;i<=m;i++,j++){
        newstr[j]=str[i];

    }
    newstr[j]='\0';
    puts(newstr);
}
int main(){
    char str[100];
    int n,m;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter the starting and ending index from which the string is to be sliced: ");
    scanf("%d%d",&n,&m);
    Slice(str,n,m);
    return 0;
}