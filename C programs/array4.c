#include<stdio.h>
int main()
{
	int arr[10],i,n;
	int sum=0;
	printf("Enter the table of\n");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		sum=sum+n;
		arr[i]=sum;
		printf("\n%d",arr[i]);
	}
	return 0;
}