#include<iostream>
using namespace std;
class array
{
	int *a,*b,n;
	public:
		void init()
		{
			cout<<"Enter the number of elements\n";
			cin>>n;
			a=new int[n];
			b=new int[n];
			cout<<"Enter the elements:";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void reverse()
		{
			for(int j=n-1,i=0;j>0,i<n;j--,i++)
			{
				b[i]=a[j];
			}
			
			cout<<"Reverse array is:\n";
			for(int i=0;i<n;i++)
			{
				cout<<b[i]<<endl;
			}
		}
};
int main()
{
	array r1;
	r1.init();
	r1.reverse();

	
}