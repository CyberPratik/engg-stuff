#include<stdio.h>
int main(){
	int i,arr[10],e=0,o=0,n;
	printf("How many no.");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Odd no. are ");
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
		printf("%5d",arr[i]);
	}
	}
}