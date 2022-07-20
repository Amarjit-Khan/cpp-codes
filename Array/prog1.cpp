// Taking size of array and array as input from user
#include <iostream>
using namespace std;
int main()
{
	int arr[50], i, n;
	cout << "Enter the number of elements";
	cin >> n;
	cout << "Enter the elements of the array";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "The elements of the array are :";
	for (i = 0; i < n; i++)
	{
		cout << arr[i];
		cout << " ";
	}
}
