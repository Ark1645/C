// 3.(a) Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main(){
	int n,a,d=0,r;
	printf("Enter a Number: ");
	scanf("%d",&n);
	a=n;
	while(n!=0){
		r=n%10;
		d=pow(r,3)+d;
		n=n/10;
	}
	if(d==a)
	printf("%d is an Armstrong Number \n",a);
	else
	printf("%d is not an Armstrong Number \n",a);
	return 0;
}



