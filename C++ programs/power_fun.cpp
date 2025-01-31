#include<iostream>
#include<cmath>
using namespace std;
int power(int a, int b);
int main()
{
	int a,b;
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	int c=power(a,b);
	cout<<"Value of expression a^b is: "<<c;
}
int power(int a,int b)
{
	int p;
	p=pow(a,b);
	return p;
}