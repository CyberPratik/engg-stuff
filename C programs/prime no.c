#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter any no\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("Given No. is Prime No.");
	}
	else
	{
		printf("Given no is not prime no.");
	}
	return 0;
}