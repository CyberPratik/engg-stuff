#include<iostream>
using namespace std;
class city
{
	int t;
	public:
		void init(float x)
		{
			t=x;
		}
		void check_hot(city c2,city c3)
		{
			if(t>c2.t &&t>c3.t)
			cout<<"Temperature of hottest city is: "<<t;
			else if(c2.t>t && c2.t>c3.t)
			cout<<"Temperature of hottest city is: "<<c2.t;
			else
			cout<<"Temperature of hottest city is: "<<c3.t;
		}
};
int main()
{
	city c1,c2,c3;
	c1.init(28);
	c2.init(40);
	c3.init(37);
	c1.check_hot(c2,c3);
	
}