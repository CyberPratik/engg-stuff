#include<stdio.h>
int main()
{
	int arr[3][3],i,j,k,l;
	printf("Enter elements for first matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	printf("Enter elements for second matrix\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			scanf("%d",&arr[k][l]);
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
	printf("\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("%5d",arr[k][l]);
		}
		printf("\n");
	}
}