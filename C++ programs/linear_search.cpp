#include<iostream>
using namespace std;
void linear_search(int arr[],int n,int e)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==e)
		{
			temp=i;
		}
		
	}
	if(temp!=NULL)
	{
		cout<<"Element is at index:"<<temp;
	}
	else
	{
		cout<<"Element not found!!!";
	}
}
int main()
{
	int n,e;
	cout<<"Enter no. of elements:";
	cin>>n;
	int *arr=new int[n];
	cout<<"Enter the elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the element to seach:";
	cin>>e;
	linear_search(arr,n,e);
}