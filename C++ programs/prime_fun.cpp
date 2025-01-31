#include<iostream>
using namespace std;
void prime(int x);
int main()
{
	int n;
	cout<<"Enter any number:";
	cin>>n;
	prime(n);
	
}
void prime(int x)
{
	int count=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0)
		{
			count++;
		}
		else
		continue;
	}
	if(count==2)
	cout<<"It is a prime number!";
	else
	cout<<"It is not a prime number!";
}
	
	
	