#include<iostream>
using namespace std;
int main(){
	int i,j,n,k;
	cout<<"Enter any numebr:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=i;j--)
		{
			cout<<" ";
		}
		for(k=i;k>=0;k--)
		{
			printf("# ");
		}
		cout<<"\n";
	}
}