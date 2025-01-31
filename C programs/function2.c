#include<stdio.h>
#define max 50

int main()
{
	int i,n,arr[max],sum=0;
	printf("How many no.");
	avg(n,arr[max],sum,i);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}

	
}
int avg(int sum, int i , int n , int arr[max])
{

	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		
	}
	return sum/5;	
}