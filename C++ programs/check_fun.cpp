#include<iostream>
using namespace std;
void check(int x);
int main()
{
	int n;
	cout<<"Enter any integer:";
	cin>>n;
	check(n);
	return 0;		
}
void check(int x)
{
	if(x>0)
	cout<<"It is a Positive Number!";
	else if(x==0)
	cout<<"It is zero!";
	else
	cout<<"It is a Negative Number!";
}