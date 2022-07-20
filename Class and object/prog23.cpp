//Using try throw and catch --> exception handling

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	cout<<"Enter value of a and b \n";
	cin>>a;
	cin>>b;
	
	try
	{
		if(b == 0)
			throw(b);
		else
			cout<<a/b<<"\n";
	}
	
	catch(int q)
	{
		cout<<"Please enter a non-zero number for denominator\n";
	}
	cout<<b;
}
