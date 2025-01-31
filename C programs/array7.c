#include<stdio.h>
int main()
{
	int arr[4][10],i,j,a,b,c;
	int s1=0,s2=0,s3=0;
	printf("Enter any 3 no. to get their table\n");
	scanf("%d%d%d",&a,&b,&c);
	for(i=1;i<4;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i=1)
			{
				s1=s1+a;
				arr[i][j]=s1;
			}
			if(i=2)
			{
				s2=s2+b;
				arr[i][j]=s2;
			}
			if(i=3)
			{
				s3=s3+c;
				arr[i][j]=s3;
			}
			
		}
	}
	for(i=1;i<4;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%5d\n",arr[i][j]);
		}
		printf("\n");
	}
		
	
	return 0;
}