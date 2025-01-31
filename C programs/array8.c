#include<stdio.h>
int main(){
	int i,arr[5],sum=0;
	printf("Enter the no.\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+arr[i];
	}
	printf("Sum is %d\n",sum);
	sum/=5;
	printf("Average is %d",sum);
	printf("\nThis no are greater than average\n");
	for(i=0;i<5;i++)
	{
		if(arr[i]>sum)
		{
			printf("%5d",arr[i]);
		}
	}
	printf("\nThis no. are smaller than average\n");
	for(i=0;i<5;i++)
	{
			if(arr[i]<sum)
		{
			printf("%5d",arr[i]);
		}
	}
	
}