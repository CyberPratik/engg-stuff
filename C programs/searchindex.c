#include<stdio.h>
int search(int arr[],int n){
	int s=0;
	int e=6;
	while(s<=e){
		int mid=s+(e-s)/2;
		if(arr[mid]==n)
		{
			return mid;
		}
		else if(arr[mid]<n){
			s=mid+1;
			
		}
		else if(arr[mid]>n)
		{
			e=mid-1;
		
		}
	}
	return -1;
	
}
int main(){
	int arr[]={1,2,3,4,5,6};
	int n;
	printf("Enter number to find index:");
	scanf("%d",&n);
	printf("%d",search(arr,n));
	
	
}