//constructor and destructor
#include<iostream>
using namespace std;

class emp
{
	int eid;
	float sal;
	public:
		emp();                    //constructor
		emp(int x, int y);        //parameterised costructor
		emp(emp &k);              //copy contructor
		void disp();
		~emp(){
			cout<<"Destructed"<<endl;
		}
};

emp::emp()
{
	eid = 10;
	sal = 50000;
}
emp::emp(int x, int y)
{
	eid = x;
	sal = y;
}
emp::emp(emp &k)
{
	eid = k.eid;
	sal = k.sal;
}

void emp::disp()
{
	cout<<"Employee id: "<<eid<<endl;
	cout<<"Employee salary: "<<sal<<endl;
}

int main()
{
	emp e1, e2(11, 20000), e3(e2);
	e1.disp();
	e2.disp();
	e3.disp();
}
