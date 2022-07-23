// Map in c++
// it is an associative array
// Helps to store key value pairs

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
	map<string, int> marksmap;
	marksmap["Harry"] = 98;
	marksmap["Jack"] = 59;
	marksmap["Rohan"] = 69;
	//	marksmap.insert({{"Kozume", 75}, {"Andrew", 23}});
	map<string, int>::iterator iter;
	for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
	{
		cout << (*iter).first << " " << (*iter).second << "\n"; // the first gives the name and second gives the marks
		//*iter is pointing to the pairs indiidually
	}

	cout << "The size is: " << marksmap.size() << endl;
	cout << "The max size is: " << marksmap.max_size() << endl;

	return 0;
}
