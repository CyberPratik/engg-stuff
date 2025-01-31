#include<stdio.h>
int main()
{
	int age;
	age=20;
	int *ptr=&age;
	int _age=*ptr;
	int **demo=&ptr;
	printf("age - %d\n",&age);
	printf("age - %d\n",age);
	printf("ptr - %d\n",&ptr);
	printf("ptr - %d\n",*ptr);
	printf("_age - %d\n",&_age);
	printf("_age - %d\n",_age);
	printf("double pointer - %d",**demo);
}
