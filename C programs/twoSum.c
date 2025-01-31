#include<stdio.h>
#include<stdlib.h>
int *twoSum(int arr[],int target,int n){
	int *returnSize=malloc(2*sizeof(int));
	for(int i=0;i<=n-1;i++)
	{
		for(int j=i+1;j<=n-1;j++)
		{
			if(target==arr[i]+arr[j])
			{
				*(returnSize)=i;
				*(returnSize+1)=j;
			}
		}
	}
	printf("[");
	for(int i=0;i<2;i++)
	{
		
		printf("%d,",*(returnSize+i));
		
		
	}
	printf("]");
	free(*returnSize);
}

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
	scanf("%d,",&target);
	twoSum(arr, target, n);
    
    
	
}