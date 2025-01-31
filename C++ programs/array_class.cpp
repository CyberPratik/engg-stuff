#include<iostream>
using namespace std;
class darray
{
	int *a,n;
	public:
		void init()
		{
			cout<<"Enter the number of elements\n";
			cin>>n;
			a=new int[n];
			cout<<"Enter the elements:\n";
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void disp()
		{
			cout<<"All elements are:\n";
			for(int i=0;i<n;i++)
			{
				cout<<a[i]<<endl;
			}
		}
		int get(int i)
		{
			cout<<"Element at the given index is:";
			cout<<a[i];
		}
};
int main()
{
	darray r1;
	int k;
	r1.init();
	r1.disp();
	cout<<"Enter any index to get element:";
	cin>>k;
	r1.get(k);

	
}