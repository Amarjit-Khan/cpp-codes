//Accepts a line as input from user
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string fullName;
	cout << "Type your full statement: ";
	getline (cin, fullName);
	cout << "Your statement is: " << fullName;
}
