//operations on strings
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1("12345");
	string s2("abcde");
	
	//inserting a string into another
	cout<<"Placing s2 inside s1 \n";
	s1.insert(4,s2);
	cout<<"Modified s1 is:"<<s1<<endl;
	
	//removing characters in a string
	cout<<"Removing 5 chararcters from s1\n";
	s1.erase(4,5);
	cout<<"Now s1:"<<s1<<endl;
	
	//replacing characters in a string
	cout<<s2<<endl;
	cout<<"Replacing middle 3 characters in s2 with s1 characters ";
	s2.replace(1,3,s1);
	cout<<"Now s2:"<<s2<<endl;
	
	cout<<"size = "<<s1.size()<<endl;
	cout<<"length = "<<s1.length()<<endl;
	cout<<"Empty: "<<(s1.empty() ? "yes":"no")<<endl;
	
	string s3("ONE TWO THREE FOUR");
	int i;
	for(i=0;i<s3.length();i++)
	{
		cout<<s3[i];
	}
	cout<<endl;
	int x1 = s3.find("TWO");
	cout<<"TWO is found at: "<<x1;
}
