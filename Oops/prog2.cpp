//class and array of objects
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
	cout<<"The total marks he got is: "<<total<<endl;
}

int main()
{
	int t, i=0;
	cout<<"Enter the number of test cases: ";
	cin>>t;
	student s1[t];
	for(i=0;i<t;i++)
	{
		s1[i].input();
		s1[i].calculate();
		s1[i].output();
	}
}
