#include<stdio.h>

int main(){
	int arr[50];
	int n,target;
	printf("Enter how many elements:");
	scanf("%d",&n);
	for(int i=0;i<=n-1;i++)
	{
		scanf("%d",&arr[i]);
		
	}
	printf("Enter the value of target:");
	scanf("%d",&target);
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(target==arr[i]+arr[j])
			{
				printf("[%d,%d]\n",i,j);
			}
		}
	}
	
}