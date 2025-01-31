#include<iostream> 
using namespace std;
class employee
{
	float s;
	public:
		void init()
		{
			cout<<"Enter the salary:";
			cin>>s;
		}
		int tax()
		{
			return s*0.20;
		}
};
int main()
{
	employee e1;
	e1.init();
	float a;
	a=e1.tax();
	cout<<"Tax payable is: "<<a;
}
