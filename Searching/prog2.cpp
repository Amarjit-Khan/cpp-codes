// Binary search in a sorted array in c++
// O(log(n))

#include <iostream>
using namespace std;

int Bsearch(int a[], int l, int u, int key)
{
	int mid;
	mid = (l + u) / 2;
	if (a[mid] == key)
	{
		return mid;
	}
	else if (a[mid] > key)
	{
		return Bsearch(a, l, mid - 1, key);
	}
	else if (a[mid] < key)
	{
		return Bsearch(a, mid + 1, u, key);
	}
	else
	{
		return -1;
	}
}
int main()
{
	int arr[50], i, n, key;
	cout << "Enter the number of elements :";
	cin >> n;
	cout << "Enter the elements of the array :";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Enter the element to search :";
	cin >> key;
	int index = Bsearch(arr, 0, n - 1, key);
	if (index == -1)
	{
		cout << "Ooops! Element not found";
	}
	else
	{
		cout << "Element found at index : " << index << " and position " << index + 1;
	}
}
