#include<stdio.h>
#include<string.h>
int main(){
    char str[100],new[100]="Mr.",con[100]="Cadet";
    printf("Enter a string: ");
    fgets(str,100,stdin);
    //Calculating the length of string.
    int len=strlen(str);
    printf("Length of the string is: %d\n",len-1);
    //Copying the data of old String "str" into new String "new".
    strcpy(new,str);
    printf("%s\n",new);
    //Concatinating two strings. Don't give spaces between the words otherwise concatination will not work properly.
    strcat(con,str);
    printf("%s\n",con);
    char st1[100]="Hello",st2[100]="Mayank",st3[100]="Mangos";
    //Comparing two strings.
    printf("%d\n",strcmp(st1,st2));
    printf("%d\n",strcmp(st2,st3));
    return 0;
}