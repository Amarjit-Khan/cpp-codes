//Taking a string as an input from user in c++
//We create objects of string class, only one word is accepted
//for char only one letter is accepted
//for character array 10 letters including space
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2(" New Delhi is so good");
	cout<<"Enter a string : ";
	cin>>s1;
	cout<<s1+s2<<endl;
	char cities;
	cout<<"Enter the line";
	cin>>cities;
	cout<<cities<<endl;
	char arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
