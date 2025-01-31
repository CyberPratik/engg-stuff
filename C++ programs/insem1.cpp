#include<iostream>
using namespace std;
void swap(int a,int b){
	int *ptr_a;
	int *ptr_b;
	int temp=0;
	*ptr_a=&a;
	*ptr_b=&b;
	temp=*ptr_a;
	*ptr_a=*ptr_b;
	*ptr_b=&temp;
}
int main(){
	int a,b;
	a=5;
	b=10;
	swap(a,b);
	cout<<"a: "<<a<<endl;
	cout<<"b: "<<b;
}