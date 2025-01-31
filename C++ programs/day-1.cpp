#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements:";
	cin>>n;
	int arr[8]={0, 1, 2, 1, 0, 2, 1,0};
	for(int i=0;i<8;i++)
	{
		for(int j=i+1;j<8;j++)
		{	
			if(arr[i]>arr[j])
			{
				swap(arr[i],arr[j]);
			}
			else if(arr[i]==arr[j])
			{
				swap(arr[j],arr[i+1]);
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		cout<<arr[i]<<endl;	
	}	

}