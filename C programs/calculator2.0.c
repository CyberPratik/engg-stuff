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
	switch (n)//switch is similar to if else
	{
	case 1:
		add(x,y);
		break;
	case 2:
		sub(x,y);
		break;
	case 3:
		mult(x,y);
		break;
	case 4:
		div(x,y);
		break;
	default:
		printf("!!Invalid Input!!");
		break;
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
	printf("%.2f - %.2f = %.2f",x,y,x-y);
	return x-y;
}

float mult(float x,float y)
{
	printf("%.2f * %.2f = %.2f",x,y,x*y);
	return x*y;
}

float div(float x,float y)
{
	printf("%.2f / %.2f = %.2f",x,y,x/y);
	return x/y;
}
