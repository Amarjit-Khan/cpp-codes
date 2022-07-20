//constructor
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
};

void emp::disp()
{
	cout<<eid<<endl;
	cout<<sal<<endl;
}

emp::emp()
{
	eid = 10;
	sal = 100;
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


int main()
{
	emp e1, e2(11, 5000), e3(e2);
	e1.disp();
	e2.disp();
	e3.disp();
}
