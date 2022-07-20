//Constructor and inheritance
//If we call a constructor in base class then we have to call one in derived class

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
		void disp1()
		{
			cout<<"x = "<<x<<"\n";
			cout<<"y = "<<y<<"\n";
		}
	
};

class B : public A
{
	int z;
	public:
		B(int a, int b, int c):A(a, b)       //method to call base class constructor
		{
			z = c;
		}
		void disp2()
		{
			disp1();
			cout<<"z = "<<z<<"\n";
		}
};

int main()
{
	B ob1(50, 60, 70);
	ob1.disp2();
}
