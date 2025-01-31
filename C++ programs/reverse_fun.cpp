#include<iostream>
using namespace std;
int reverse(int n);
int main()
{
	int n;
	cout<<"Enter any number: ";
	cin>>n;
	int a=reverse(n);
	cout<<"Reverse of given number is: "<<a;
}
int reverse(int n)
{
	int rem,result=0;
	while(n!=0)
	{
		rem=n%10;
		result=result*10+rem;
		n/=10;
	}
	return result;
}