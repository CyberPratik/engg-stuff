#include<iostream>
using namespace std;
class search
{
	int *a,n,k;
	public:
	void init()
	{
		cout<<"Enter no of elements:";
		cin>>n;
		a= new int [n];
		cout<<"Enter the prices:";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
	}
	int avg()
	{
		int sum=0,av;
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		av=sum/n;
		return av;
	}
	void check(search s1)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]<=s1.avg())
			cout<<a[i]<<endl;
			else
			continue;
		}
	}
};
int main()
{
	search s1;
	s1.init();
	cout<<"Average is:"<<s1.avg()<<endl;
	cout<<"Prices below average is:";
	s1.check(s1);
	
}

