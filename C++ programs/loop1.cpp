#include<stdio.h>
#include<stdlib.h>
int main(){
	int i=1,n,count=0;
	printf("Enter any no.");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("prime no.");
	}
	else
	{
		printf("not a prime no.");
	}
	return 0;
}