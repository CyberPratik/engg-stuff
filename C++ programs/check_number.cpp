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
		cout<<"Enter the elements:";
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<"Enter the number to search:";
		cin>>k;	
	}
	void check()
	{
		for(int i=0;i<n;i++)
		{
			if(k==a[i])
			{
				cout<<"MATCH FOUND AT INDEX:"<<i;
			}
			else
			{
				cout<<"MATCH NOT FOUND!!";
				break;
			}
		}
	
	}
};
int main()
{
	search s1;
	s1.init();
	s1.check();
	
}

