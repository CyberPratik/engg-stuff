#include<iostream>
using namespace std;
int get();
int get(){
	int x;
	float y;
	return (x=20,y=25.20);
}
int main(){
	cout<<get();
	
}
