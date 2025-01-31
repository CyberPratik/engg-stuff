#include<stdio.h>
int main()
{
	char str[]="Pratik";
	char str2[20];
	printf("%s",str);
	int length=0;
	length=strlen(str);
	strlwr(str);//lowercse
	strupr(str);//Uppercase
	printf("\n%d is the length of string.",length);//String length
	strcpy(str2,str);//copy string str to str2
	printf("\nstr: %s\t str2: %s",str,str2);
	printf("\n%d",strcmp(str2,str));//Compare string if eq.=0
	
	return 0;
}