#include<iostream>
using namespace std;
class circle
{
	int r;
	public:
		void init(float x)
		{
			r=x;
		}
		int area(circle c2)
		{
			float a;
			a=(3.14*r*r)+(3.14*c2.r*c2.r);
			return a;
		}
};
int main()
{
	circle c1,c2;
	c1.init(7);
	c2.init(7);
	float area;
	area=c1.area(c2);
	cout<<"Total Area of given circle is: "<<area;
}