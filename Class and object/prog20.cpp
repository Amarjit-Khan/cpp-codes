//Passing a pointer as character array(string) into a function

#include<iostream>
#include<string.h>
using namespace std;

void update(char *p)
{
	cout<<p<<"\n";
	cout<<*p<<"\n";
	cout<<strlen(p)<<"\n";
	*(p+3) = *(p+3) + 2;
	cout<<p;
}

int main()
{
	char *str="TOMATO";
	cout<<str<<"  ";
	update(str);
}
