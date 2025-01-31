#include<iostream>
using namespace std;
void swap(int &a, int &b);
int main()
{
	int a,b;
	cout<<"Enter first number a:";
	cin>>a;
	cout<<"Enter second number b:";
	cin>>b;
	swap(a,b);
	cout<<"Value of a:"<<a<<endl;
	cout<<"Value of b:"<<b;
}

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}