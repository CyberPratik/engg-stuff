#include<stdio.h>
int main(){
	int i,arr[5],n;
	printf("Enter the no.");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter no. to search");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		if(arr[i]==n)
		{
			break;
		}	
	}
	if(i<5)
	{
		printf("\nElement found at %d",i);
	}
	else 
	{
		printf("Element not found");
	}
	
}