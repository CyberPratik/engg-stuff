#include<iostream>
using namespace std;
int main()
{
	int rem,n,digit=0,og;
	cout<<"Enter any number:";
	cin>>n;
	og=n;
	while(n!=0)
	{
		rem=n%10;
		digit+=rem*rem*rem;
		n/=10;
	}
	if(og==digit)
	{
		cout<<"This is an armstrong number";
	}
	else
	{
		cout<<"This is not an armstrong number";
	}
}