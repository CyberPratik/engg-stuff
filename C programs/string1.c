#include<stdio.h>
int main(){
	int i,e=0,o=0,n;
	char arr[10];
	printf("Enter name\n");
	gets(arr);
	for(i=0;arr[i]!='\0';i++)
	{
	if(i%2==0)
	{
		printf("%5c",arr[i]);
	}
	
}
return 0;
}