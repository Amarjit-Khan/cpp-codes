#include<iostream>
using namespace std;

class A
{
	int x, y;
	public:
		A(int a, int b)
		{
			x = a;
			y = b;
		}
	
};

class B : public A
{
	int z;
	public:
		B(int a, int b, int c): A(a, b)
		{
			z = c;
		}
		void display2()
		{
			cout<<"x = "<<x<<"\n";
			cout<<"y = "<<y<<"\n";
			cout<<"z = "<<z<<"\n";
		}
};

int main()
{
	B ob1(50, 60, 70);
	ob1.display2();
}
