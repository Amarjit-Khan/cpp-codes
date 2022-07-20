//passing objects as arguement of a function in class
#include<iostream>
using namespace std;

class time{
	int h,m,s,total;
	public:
		void input()
		{
			cout<<"Enter the hour: ";
			cin>>h;
			cout<<"Enter the minute: ";
			cin>>m;
			cout<<"Enter the second: ";
			cin>>s;
		}
		void calculate(time x, time y);
		void output();
};

void time::calculate(time x, time y)
{
	s = x.s+y.s;
	m = x.m+y.m;
	h = x.h+y.h;
}

void time::output()
{
	cout<<h<<":"<<m<<":"<<s<<endl;
}

int main()
{
	time t1,t2,t3;
	t1.input();
	t2.input();
	t3.calculate(t1, t2);
	t3.output();
}
