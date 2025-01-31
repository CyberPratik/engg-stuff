#include<stdio.h>
int main()
{
	int arr[3][3],i,j;
	printf("Enter elements for matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%5d",arr[i][j]);
		}
		printf("\n");
	}
}