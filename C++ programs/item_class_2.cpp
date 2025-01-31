#include<iostream>
using namespace std;
class item
{
	int p;
	public:
		void init(int x)
		{
			p=x;
			
		}
		void cheap(item i2,item i3)
		{
			if(p<i3.p && p<i2.p)
			cout<<"Price of Cheapest item is:"<<p;
			else if(i3.p<p && i3.p<i2.p)
			cout<<"Price of Cheapest item is:"<<i3.p;
			else
			cout<<"Price of Cheapest item is:"<<i2.p;
		}
};
int main()
{
	item i1,i2,i3;
	i1.init(5000);
	i2.init(2000);
	i3.init(200);
	i1.cheap(i2,i3);
}