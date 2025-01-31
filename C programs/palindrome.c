#include<stdio.h>
int main(){
	int n,rem,rev=0,og;
	printf("Enter any no.");
	scanf("%d",&n);
	og==n;
	while(n!=0)
	{
		rem=n%10;//4554/10==4     455  0=4*10+5=45  0=45*10+5=455 455*10+4=4554
		rev=rev*10+rem;//0=0+4  4  45 455 4554 
		n=n/10;
	}
	if(og=rev)
	{
		printf("It is palindrome no.");
	}
	else
	{
		printf("It is not palindrome no.");
	}
}