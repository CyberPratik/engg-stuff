#include<iostream> 
using namespace std;
class item
{
	float p;
	public:
		void init()
		{
			cout<<"Enter the price of item:";
			cin>>p;
		}
		int discount()
		{
			return 0.15*p;
		}
};
int main()
{
	item i1;
	i1.init();
	float a;
	a=i1.discount();
	cout<<"Discount on the item is: "<<a;
}
