// linear search
// O(n)

#include <iostream>
using namespace std;

int lsearch(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			cout << "Element found at index : " << i << " and position " << i + 1;
	}
}

int main()
{
	int i, n, x, a[10];
	cout << "Enter the number of elements : ";
	cin >> n;
	cout << "Enter the elements : ";
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the element to search : ";
	cin >> x;

	lsearch(a, n, x);
}
