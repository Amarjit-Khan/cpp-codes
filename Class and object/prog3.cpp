//static data member usage
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
		cout<<a<<endl<<count;
	}
};
int demo::count = 5;

int main()
{
	demo s1,s2,s3;
	s1.set(10);
	s1.disp();
	cout<<endl;
	s2.set(20);
	s2.disp();
	
}
