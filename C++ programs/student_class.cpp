#include<iostream> 
using namespace std;
class student
{
	int marks;
	public:
		void init()
		{
			cout<<"Enter the marks:";
			cin>>marks;
		}
		int avg(student s2,student s3, student s4,student s5)
		{
			float a;
			a=(marks+s2.marks+s3.marks+s4.marks+s5.marks)/5;
			return a;
		}
};
int main()
{
	student s1,s2,s3,s4,s5;
	s1.init();
	s2.init();
	s3.init();
	s4.init();
	s5.init();
	float a;
	a=s1.avg(s2,s3,s4,s5);
	cout<<"Average is: "<<a;
}
