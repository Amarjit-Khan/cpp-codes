//class and objects
#include<iostream>
using namespace std;

class student{
	int maths, science, eng, total;
	public:
		void input(){
			cout<<"Enter the marks in maths: ";
			cin>>maths;
			cout<<"Enter the marks in science: ";
			cin>>science;
			cout<<"Enter the marks in english: ";
			cin>>eng;
		}
		void calculate();
		void output();
};

void student::calculate()
{
	total = maths+science+eng;
}

void student::output()
{
	cout<<"The total marks he got is: "<<total;
}

int main()
{
	student s1;
	s1.input();
	s1.calculate();
	s1.output();
}
