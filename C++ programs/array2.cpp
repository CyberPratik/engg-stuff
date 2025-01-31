#include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter any number to search its index:";
	cin>>n;
	int array[]={1,2,3,4,5};
	for(i=0;i<5;i++)
	{
		if(array[i]!=n)
		{
			continue;
		}
		else
		{
			cout<<endl<<"Index is: "<<i;
			break;
		}
		
	}
}