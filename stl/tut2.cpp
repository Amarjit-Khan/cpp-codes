// List (Linked List)
// a bi-directional linear list that performs the insertions and deletions operations effectively

#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst)
{
	list<int>::iterator it;
	for (it = lst.begin(); it != lst.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
int main()
{
	list<int> list1; // linked list of length 0

	// inserting elements to list (method 1)
	list1.push_back(5);
	list1.push_back(7);
	list1.push_back(3);
	list1.push_back(9);
	list1.push_back(11);
	list1.push_back(8);
	list1.push_back(19);

	cout << "elements of list1 : ";
	display(list1);

	list<int> list2(3); // empty linked list of size 7
	list<int>::iterator iter = list2.begin();

	// inserting elements to list (method 2)
	*iter = 45;
	iter++;
	*iter = 6;
	iter++;
	*iter = 99;
	iter++;

	cout << "elements of list2 : ";
	display(list2);

	// sorting elements
	list1.sort();
	cout << "elements of list1 in sorted order : ";
	display(list1);

	// deleting elements from list
	list1.pop_back();
	cout << "deleting last element of list1 : ";
	display(list1);

	list2.pop_front();
	cout << "deleting first element of list2 : ";
	display(list2);

	list1.remove(3); // removes all occurances of 3
	cout << "deleting all 3s of list1 : ";
	display(list1);

	// merging lists
	list1.merge(list2);
	cout << "List1 after merging : ";
	display(list1);

	// reversing the list
	list1.reverse();
	cout << "List1 after reversing : ";
	display(list1);

	return 0;
}
