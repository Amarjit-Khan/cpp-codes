//Reading and writing a file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	//Writing
	ofstream ob1("Student");
	
	int p = ob1.tellp();    //to know the location of the pointer in write mode
	cout<<p<<"\n";
	cout<<"Enter Roll number and marks of the students"<<"\n\n";
	int marks, roll;
	for(int i=0;i<2;i++)
	{
		cout<<"Enter Roll :- ";
		cin>>roll;
		cout<<"\n";
		cout<<"Enter marks :- ";
		cin>>marks;
		cout<<"\n";
		
		ob1<<marks<<"\n";
		ob1<<roll<<"\n";
		
		int g = ob1.tellp();
		cout<<g<<"\n";
	}
	
	ob1.close();
	
	//Reading
	ifstream ob2("Student");
	
	for(int i=0;i<2;i++)
	{
		ob2>>marks;
		ob2>>roll;
		
		cout<<"\n";
		cout<<"Student Roll : "<<marks<<"\n";
		cout<<"Student Marks : "<<roll<<"\n";
		
		int h = ob2.tellg();         //to know the location of the pointer in read mode
		cout<<h<<"\n";
	}
		
	ob2.close();
}
