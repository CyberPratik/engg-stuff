#include<stdio.h>
float add(float x,float y);
float sub(float x,float y);
float mult(float x,float y);
float div(float x,float y);
int main()
{
	float x,y;
	int n;
	printf("Choose the operator from below:\n");
	printf("Enter '1' for '+'\n");
	printf("Enter '2' for '-'\n");
	printf("Enter '3' for '*'\n");
	printf("Enter '4' for '/'\n");
	scanf("%d",&n);
	printf("Enter first no.");
	scanf("%f",&x);
	printf("Enter second no.");
	scanf("%f",&y);
	if(n==1)
	{
		add(x,y);
	}
	if(n==2)
	{
		sub(x,y);
	}
	if(n==3)
	{
		mult(x,y);
	}
	if(n==4)
	{
		div(x,y);
	}
	else 
	{
		printf("!!Invalid Input!!");
	}
	return 0;
}

float add(float x,float y)
{
	printf("%.2f + %.2f = %.2f",x,y,x+y);
	return x+y;
}

float sub(float x,float y)
{
	printf("%.2f + %.2f = %.2f",x,y,x-y);
	return x-y;
}

float mult(float x,float y)
{
	printf("%.2f + %.2f = %.2f",x,y,x*y);
	return x*y;
}

float div(float x,float y)
{
	printf("%.2f + %.2f = %.2f",x,y,x/y);
	return x/y;
}
