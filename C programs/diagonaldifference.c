#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,n,arr[3][3];
	int sum=0,add=0,x1,x2;
	printf("Enter no of rows and columns");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);	
		}
		
	}
	for(i=0;i<n;i++)
	{
		
		sum+=arr[i][i];
	}
	for(i=0,j=n-1;i<n,j>=0;i++,j--)
	{
		
			add+=arr[i][j];
						
		
	}
	x1=abs(add);
	x2=abs(sum);
	if(add>sum)
	{
		printf("%d",x1-x2);
	}
	else
	{
		printf("%d",x2-x1);
	}
	
	
	return 0;
}