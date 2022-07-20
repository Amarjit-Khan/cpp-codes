//Templates using function

#include<iostream>
using namespace std;

template <class T>

void swap(T*x, T*y)
{
	T temp;
	temp=*x;
	*x=*y;
	*y=temp;
}

int main()
{
	int x, y;         //float x, y;;;char x, y;;;double x, y
	cout<<"Enter two numbers";
	cin>>x>>y;
	
	cout<<"\nBefore Swapping";
	cout<<"\nValue of x = "<<x;
	cout<<"\nValue of y = "<<y;
	
	swap(&x, &y);
	
	cout<<"\n\nAfter swapping";
	cout<<"\nValue of x = "<<x;
	cout<<"\nValue of y = "<<y;
	
	return 0;
}
