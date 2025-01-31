#include<iostream> 
using namespace std;
class account
{
	float bal;
	public:
		void init()
		{
			cout<<"Enter the balance of account:";
			cin>>bal;
		}
		int s_interest()
		{
			return bal*5*0.085;
		}
};
int main()
{
	account a1;
	a1.init();
	float a;
	a=a1.s_interest();
	cout<<"Simple Interest is for 5 years: "<<a;
}
