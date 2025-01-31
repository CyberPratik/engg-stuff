#include<iostream>
using namespace std;
class employee
{
	int s;
	public:
		void init(int x)
		{
			s=x*0.20;
		}
		int sum_tax(employee e2,employee e3)
		{
			int sum;
			sum=s+e2.s+e3.s;
			return sum;
		}
};
int main()
{
	employee e1,e2,e3;
	e1.init(100);
	e2.init(100);
	e3.init(100);
	int s=e1.sum_tax(e2,e3);
	cout<<"Sum of taxes paid by all employee is:"<<s;
}