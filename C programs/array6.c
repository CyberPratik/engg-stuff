#include<stdio.h>
int main()
{
	int i,arr[5],count=0;
	printf("enter any 5 digits");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]>0)
		{
			printf("%5d",arr[i]);
		}
	}
}