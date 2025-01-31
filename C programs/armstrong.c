#include<stdio.h>
int main()
{
	int n,og,rem,result=0;
	printf("Enter any no.");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		result=result+rem*rem*rem;
		n=n/10;
	}
	if(og=result)
	{
		printf("It is a Armstrong no.");
	}
	else
	{
		printf("It is not Armstrong No.");
	}
	return 0;
}