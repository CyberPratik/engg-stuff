#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("Enter any no.\n");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		fact*=i;
	}
	printf("%d",fact);
	return 0;
}