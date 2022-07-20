//Destructor
#include<iostream>
using namespace std;

class test
{
	int x;
	public:
	test()
	{
		cout<<"Constructed"<<endl;
	}
	~test()
	{
		cout<<"destructed"<<endl;
	}
};

int main()
{
	test t1, t5, t6;
	{
		test t2;
	}
	{
		test t3;
	}
}
