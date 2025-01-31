#include<stdio.h>
int main()
{
	int n,i,t1=0,t2=1,t3;
	printf("Enter any no");
	scanf("%d",&n);
	if(n==1)
	{
		printf("%d",t1);
	}
	else
	{
		printf("%d%d",t1,t2);
	}
	for(i=3;i<=n;i++)
	{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf("%d",t3);
	}
	
}