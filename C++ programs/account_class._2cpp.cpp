#include<iostream> 
using namespace std;
class account
{
	float bal;
	public:
		int init(float x)
		{
			bal=x;
			return bal;
		}
		void disp()
		{
			cout<<bal<<endl;
		}
		void swap(account *a22)
		{
			float temp;
			temp=bal;
			bal=a22->bal;
			a22->bal=temp;	
		}
		
};
int main()
{
	account a1,a2;
	a1.init(5000);
	a2.init(7000);
	a1.disp();
	a2.disp();
	a1.swap(&a2);
	cout<<"Value after swapping:\n";	
	a1.disp();
	a2.disp();
}
