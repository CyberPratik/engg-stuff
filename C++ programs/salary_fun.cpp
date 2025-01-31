#include<iostream>
using namespace std;
int tax(int x);
int main()
{
	int s;
	cout<<"Enter salary of the employee:"<<endl;
	cin>>s;
	int t=tax(s);
	cout<<"Tax on the salary is: "<<t;	
}
int tax(int x)
{
	int t;
	t=0.15*x;
	return t;
}