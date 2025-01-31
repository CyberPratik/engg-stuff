#include<iostream>
using namespace std;
int factorial(int);
int factorial(int n){
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main(){
	int number;
	cout<<"Enter any number to find factorial:";
	cin>>number;
	cout<<"Factorial is:"<<factorial(number);
}
