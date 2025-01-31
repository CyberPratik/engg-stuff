#include<iostream> 
using namespace std;
class user
{
	int pin;
	public:
		void init()
		{
			cout<<"Enter the pin:";
			cin>>pin;
		}
		void check()
		{
			if(pin==1111)
			cout<<"User is Authorized!";
			else
			cout<<"User is Unauthorized!";
		}
};
int main()
{
	user u1;
	u1.init();
	u1.check();
	
}
