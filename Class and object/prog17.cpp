//Passing an array into a function

#include<iostream>
using namespace std;

void update(int a[], int size)
{
	int i;
	for(i=0; i<size; i++)
		a[i] = a[i]*2;
}

int main()
{
	int i;
	int p[] = {10, 20, 30};
	update(p, 3);
	
	for(i=0; i<=2; i++)
		cout<<p[i]<<" ";
}
