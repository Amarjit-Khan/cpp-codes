//Operator overloading using friend function

#include<iostream>
using namespace std;

class complex
{
	float x;
	float y;
	
	public:
		complex(){ }                           //unparameterised constructor
		complex(float real, float imag)        //parameterized constructor
		{ x=real; y=imag; }
		friend complex operator + (complex,complex);
		void display(void);
};

complex  :: operator + (complex c,complex d)       //return-type classname ::operator_keyword+(object of class to receive the arguement)
{
	complex temp;
	temp.x = c.x + d.x;
	temp.y = c.y + d.y;
	return(temp);
}

void complex :: display(void)
{
	cout<<x<<" +j"<<y<<"\n";
}

int main()
{
	complex c1(2.5, 3.5),c2(1.6, 2.7),c3;
	c3= operator+(c1,c2);
	
	cout<<"c1 = ";c1.display();
	cout<<"c2 = ";c2.display();
	cout<<"c3 = ";c3.display();
	
	return 0;
}
