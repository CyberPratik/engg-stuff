#include<stdio.h>
int main(){
	int i,arr[5],j,temp=0;
	printf("Enter the no.");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if((arr[i])>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Ascending order is: ");
	for(i=0;i<5;i++)
	{
		printf("%5d",arr[i]);
	}
	printf("\nDescending order is:");
	for(i=4;i>=0;i--)
	{
		printf("%5d",arr[i]);
	}
	printf("\nSmallest no is: %d",arr[0]);
	printf("\nGreatest no is: %d",arr[4]);
	return 0;	
}