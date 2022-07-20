// Static function usage
#include<iostream>
using namespace std;

class demo
{
	int a;
	static int count;
	
	public:
	void set(int x)
	{
		a = x;
		count++;
	}
	void disp()
	{
		cout<<a<<endl;
	}
	void static disp1()
	{
		cout<<count;
	}
};
int demo::count = 5;

int main()
{
	demo s1,s2,s3;
	s1.set(10);
	s1.disp();
	s1.disp1();
	cout<<endl;
	s2.set(20);
	s2.disp();
	s2.disp1();
	
}
