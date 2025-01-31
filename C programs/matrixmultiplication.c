#include<stdio.h>
int main()
{
	int arr[3][3],i,j,k,l,m,n,sum=0,a=0,sum1=0,sum2=0;
	int arr1[3][3],arr4[3][3],b=0;
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
			scanf("%d",&arr1[k][l]);
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
			printf("%5d",arr1[k][l]);
		}
		printf("\n");
	}
	printf("\nMultiplication of matrix is\n");	
	for(i=0;i<3;i++)
	{	
		for(j=k=0;j<3,k<3;j++,k++)
		{
			sum+=(arr1[k][0]*arr[i][j]);
			arr4[i][0]=sum;
			
		}
		sum=0;
		for(j=k=0;j<3,k<3;j++,k++)
		{
			sum1+=(arr1[k][1]*arr[i][j]);
			arr4[i][1]=sum1;
			
		}
		sum1=0;
		for(j=k=0;j<3,k<3;j++,k++)
		{
			sum2+=(arr1[k][2]*arr[i][j]);
			arr4[i][2]=sum2;
			
		}
		sum2=0;
		
		printf("\n");
		
	}
	for(i=0;i<3;i++)
	{	
	for(j=0;j<3;j++)
	{
	printf("%5d",arr4[i][j]);
	}	 	
		printf("\n");
	
	}
	
	return 0;
}