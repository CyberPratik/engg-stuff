#include<stdio.h>
int main()
{
	int x=0,y;
	printf("Enter first no x=");//4
	scanf("%d",&x);
	printf("Enter second no y=");//5
	scanf("%d",&y);
	x=x+y;//4+5=9
	y=x-y;//9-5=4
	x=x-y;//9-4=5
	printf("x= %d y= %d",x,y);
	return 0;
}