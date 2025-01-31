#include<iostream>
using namespace std;
class type_numbers
{
	int *a,n;
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
	}
	int positive()
	{
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]>0)
			count++;
		}

		return count;
	}
	int negative()
	{
		int temp=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]<0)
			temp++;	
		}
		return temp;
	}
};
int main()
{
	type_numbers t1;
	t1.init();
	cout<<"Positive Numbers are:"<<t1.positive()<<endl;
	cout<<"Negative Numbers are:"<<t1.negative();
}

