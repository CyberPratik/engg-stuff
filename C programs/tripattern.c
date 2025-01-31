#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("Enter any no.");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=i+1;k<=n;k++)//2
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
		
		printf("* ");
		}
			
			printf("\n");
	}
}