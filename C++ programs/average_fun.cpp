#include<iostream>
using namespace std;
int avg(int x,int y, int z);
int main()
{
	int x,y,z;
	cout<<"Enter any three numbers:"<<endl;
	cin>>x>>y>>z;
	int average=avg(x,y,z);
	cout<<"Average of given three numbers is: "<<average;
	
	
}
int avg(int x,int y, int z)
{
	int a;
	a=(x+y+z)/3;
	return a;
}