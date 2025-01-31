#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d\n%d",&x,&y);
	sum(x,y);
	
	return 0;
}
int sum(int x,int y)
{
	return printf("Sum is %d",x+y);
}