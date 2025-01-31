#include<stdio.h>
int main()
{
	int x,y,z=0;
	int *ptr;//pointer initialization
	printf("Enter any two no.");
	scanf("%d%5d",&x,&y);
	z=x+y;
	ptr=&z;//assigning pointer
	printf("%p is ptr \n%d is z\n%d is *ptr",ptr,z,*ptr);//printing pointer
	
}