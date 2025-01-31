#include<stdio.h>
sqroot(arr[],n);
sqroot(arr[],n){
	int s=0;
	int e=n;
	int mid=e - (e-s)/2;
	while(e<=s){
		if(arr[mid]==n)
		{
			return arr[mid];
		}
		elseif(arr[mid]>n)
		{
			s=mid+1;
			mid=e - (e-s)/2;
			return arr[mid];
		}
		else{
			e=mid-1;
			mid=e - (e-s)/2;
			return arr[mid];
		}
	}
}
int main(){
	int n;
	printf("Enter the number to find sq. root:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		arr[i]=i;
	}
	sqroot(arr[],n);
	
	
}