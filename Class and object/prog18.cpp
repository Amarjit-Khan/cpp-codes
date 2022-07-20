//Passing a pointer array into a function

#include<iostream>
using namespace std;

void update(int *a, int size)
{
	int i;
	for(i=0; i<size; i++)
		a[i] = a[i]*2;
}

int main()
{
	int i;
	//int *p[] = {10, 20, 30}; invalid for integer array, valid for character array
	int *p;
	int a[] = {10, 20, 30};
	p = a;
	update(p, 3);
	
	int *c;
	c = new int[3];
	cout<<"Enter the array";
	for(i=0; i<=2; i++)
		cin>>c[i];
	
	update(c, 3);
	for(i=0; i<=2; i++)
		cout<<p[i]<<" ";
	cout<<"\n";
	for(i=0; i<=2; i++)
		cout<<c[i]<<" ";
	
}
