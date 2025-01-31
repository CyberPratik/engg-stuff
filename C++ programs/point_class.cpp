#include<iostream> 
#include<cmath>
using namespace std;
class point
{
	float x,y;
	public:
		void init(float a,float b)
		{
			x=a;
			y=b;
		}
		float distance()
		{
			float d;
			d=sqrt(x*x+y*y);
			return d;
		}
};
int main()
{
	point p1;
	p1.init(1,1);
	float a;
	a=p1.distance();
	cout<<"Distance from origin is: "<<a;
}
