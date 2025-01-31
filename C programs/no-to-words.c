#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("Enter any number\n");
	scanf("%d",&n);
	while(n!=0)
	{
		int remainder=n%10;
		rev=rev*10+remainder;
		n=n/10;
	}
	while(rev!=0)
	{
		int rem=rev%10;
		switch(rem)
		{
			case 1:
				printf("One ");
				break;
			case 2:
				printf("Two ");
				break;
			case 3:
				printf("Three ");
				break;
			case 4:
				printf("Four ");
				break;
			case 5:
				printf("Five ");
				break;		
			case 6:
				printf("Six ");
				break;
			case 7:
				printf("Seven ");
				break;
			case 8:
				printf("Eight ");
				break;
			case 9:
				printf("Nine ");
				break;
			case 0:
				printf("Zero ");
			default:
				printf("Invalid Input");
				break;
		}
		rev=rev/10;
	}
	
			
}