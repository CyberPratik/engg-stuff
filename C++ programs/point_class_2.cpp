#include<iostream>
#include<cmath>
using namespace std;
class point
{
	int x,y;
	public:
		void init(int a,int b)
		{
			x=a;
			y=b;
		}
		float area(point *p2,point *p3)
		{
			float a;
			int i;
			i=((x*(p2->y-p3->y))+(p2->x*(p3->y-y))+(p3->x*(y-p2->y)));
			a=abs(0.5*i);
			return a;
		}
};
int main()
{
	point p1,p2,p3;
	p1.init(2,3);
	p2.init(5,7);
	p3.init(8,2);
	float area;
	area=p1.area(&p2,&p3);
	cout<<"Area of the triangle is: "<<area;
	
	
}