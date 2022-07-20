//Using string and its characteristics in c++

#include<iostream>
#include<string>
using namespace std;

void display(string &str)
{
	cout<<"Size of string is = "<<str.size()<<"\n";
	cout<<"Length of string is = "<<str.length()<<"\n";
	cout<<"Capacity of string is = "<<str.capacity()<<"\n";
	cout<<"Maximum size of string is = "<<str.max_size()<<"\n";
	cout<<"Is the string empty = "<<(str.empty()? "Yes":"No")<<"\n";
	cout<<str<<"\n";
	cout<<endl;
	cout<<endl;
}
int main()
{ 
	string str1;                     //non-parameterised constructor, entering strings as object of defined class string
	string str2("samsung");          //parameterised constructor
	string str3;
	
	cout<<"Enter the string: ";
	cin>>str1;
	
	display(str1);
	display(str2);
	
	int x = str1.compare(str2);
	if(x == 0)
	cout<<"str1 == str2"<<"\n\n";
	else if(x > 0)
	cout<<"str1 > str2"<<"\n\n";
	else
	cout<<"str1 < str2"<<"\n\n";
	
	str1.resize(15);
	cout<<"After resizing the string = "<<endl;
	display(str1);
	
	str3 = str2 + str1;           //concatenation of 2 strings
	display(str3);
}
