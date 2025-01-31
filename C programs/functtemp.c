#include<stdio.h>
float funct(float c);
int main()
{
	float c,f;
	printf("Enter no. Celcius");
	scanf("%f",&c);
	funct(c);
	
	return 0;
}
float funct(float c)
{
	printf("%f clecius is %f fahrenheit",c,(c*1.8)+32);
	return 0;
}