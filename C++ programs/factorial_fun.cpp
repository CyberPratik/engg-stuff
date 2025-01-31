#include<iostream>
using namespace std;
int factorial(int x);
int main()
{
	int n;
	cout<<"Enter number to find factorial:";
	cin>>n;
	int f=factorial(n);
	cout<<"Factorial of given number is: "<<f;
}
int factorial(int x)
{
	int f=1;
	for(int i=x;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}