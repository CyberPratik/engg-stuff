#include<iostream>
using namespace std;
int main()
{
	int n,*a;
	a=new int[n];
	cout<<"Enter the no. of elemetns:\n";
	cin>>n;
	cout<<"Enter the elements:\n";
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		min=a[i];
	}
	cout<<"Maximum is:"<<max<<endl;
	cout<<"Minimum is:"<<min;
}