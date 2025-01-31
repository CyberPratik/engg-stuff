#include<stdio.h>
int main(){
	int i,arr[10],j,n,k,a,b,c;
	printf("Enter dimension of border\n");
	scanf("%d%d",&b,&a);
	printf("\n ");
	for(i=0;i<a;i++)
	{
		
		
		printf("-");
	
		
		
	}
	
	
		for(j=0;j<b;j++)
		{
			
				printf("\n|");
				for(k=i-1;k>=0;k--)
				{
					printf(" ");
				}
				printf("|");
		}	
		printf("\n ");
	for(i=0;i<a;i++)
	{
		printf("-");
	
	}
	

	return 0;
}