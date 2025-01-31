#include<stdio.h>
sqroot(int arr[],int n);
sqroot(int arr[],int n){
	int s=0;
	int e=n;
	int mid=s+ (e-s)/2;
	while(e<=s){
		if(arr[mid]==n)
		{
			return arr[mid];
		}
		if(arr[mid]>n)
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
int main(){
	int n;
	printf("Enter the number to find sq. root:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<=n-1;i++)
	{
		arr[i]=i;
	}
	int sqroot(int arr[],int n);
	
	
}