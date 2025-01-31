#include<iostream> 
using namespace std;
class circle
{
	float r;
	public:
		void init()
		{
			cout<<"Enter the radius:";
			cin>>r;
		}
		int area()
		{
			return 3.14*r*r;
		}
};
int main()
{
	circle c1;
	c1.init();
	float a;
	a=c1.area();
	cout<<a;
}
