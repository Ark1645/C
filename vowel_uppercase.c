// 8.(a) Write a program to convert all lowercase vowels to uppercase in a string.
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[100];
	int i;
	printf("Enter a string: ");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++){
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
			str[i]=toupper(str[i]);
		}
	}
	printf("Modified string is %s\n",str);
	return 0;
}