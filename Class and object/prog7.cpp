//Friend function

#include<iostream>
using namespace std;

class n2;                       //forward declaration
class n1{
	int num1;
	public:
		void set1()
		{
			num1 = 10;
		}
		friend void sum(n1,n2); //friend function, declared in both classes
};

class n2{
	int num2;
	public:
		void set2()
		{
			num2 = 20;
		}
		friend void sum(n1,n2);
};

void sum(n1 x,n2 y)
{
	cout<<x.num1+y.num2;
}

int main()
{
	n1 ob1;
	n2 ob2;
	ob1.set1();
	ob2.set2();
	
	sum(ob1,ob2);
}
