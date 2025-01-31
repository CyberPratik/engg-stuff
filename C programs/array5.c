#include<stdio.h>
int main()
{
	int arr[10],i,n;
	printf("Enter any 10 digits");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=9;i>=0;i--)
	{
		printf("\n%d\n",arr[i]);
	}
	return 0;
}