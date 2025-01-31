#include<stdio.h>
#define max 50
#include<string.h>
void string(char str[])
{
	printf("Input string is as follows:%s",str);
}
int main()
{
	char str[]="pratik karande";
	string(str);
	return 0;
}