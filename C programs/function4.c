#include<stdio.h>
int percent(int sci, int mat, int sans);

int main()
{
	int sci,mat,sans,P;
	printf("Enter marks of science");
	scanf("%d",&sci);
	printf("Enter marks of maths");
	scanf("%d",&mat);
	printf("Enter marks of sanskrit");
	scanf("%d",&sans);
	percent(sci ,mat,sans);
	
	return 0;
}

int percent(int sci, int mat, int sans)
{
	int P=(sci+mat+sans)/3;
	printf("Percentage is %d",P);
	return 0;
}