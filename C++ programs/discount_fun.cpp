#include<iostream>
using namespace std;
int discount(int x);
int main()
{
	int p;
	cout<<"Enter the original price of product:"<<endl;
	cin>>p;
	int d=discount(p);
	cout<<"Discount on the salary is: "<<d;	
}
int discount(int x)
{
	int t;
	t=0.20*x;
	return t;
}