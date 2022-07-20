//Hybrid Inheritance

#include<iostream>
using namespace std;

class A
{
	public:
		void show_a();

};
void A::show_a()
{
	cout<<"This is a"<<"\n";
}

class B : public virtual A         //to solve the ambiguity problem the virtual keyword is added
{
	public:
		void show_b();
		
};
void B::show_b()
{
	cout<<"This is b"<<"\n";
}
class C : virtual public A
{
	public:
		void show_c()
		{
			cout<<"This is c"<<"\n";
		}
};
class D : public B, public C
{
	public:
		void show_d()
		{
			cout<<"This is d"<<"\n";
		}
};

int main()
{
	D d;
	d.show_a();
	d.show_b();
	d.show_c();
	d.show_d();
}
