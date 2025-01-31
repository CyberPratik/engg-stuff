#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,k,n;
	printf("Entr no. of lines");
	scanf("%d",&n);//n=5
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			printf("%d",i);	
		}
		
	}
	
}