// Quick sort
// Divide and conquer
// Take a pivot-sort it to its proper location such that all elements left of pivot is less and all elements to right are greater than it.
// Repeat the same in the subarrays formed (0 to pivot-1) and (pivot+1 to n)
#include <iostream>
using namespace std;

int a[10];

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

int partition(int l, int h)
{
    int pivot = l;
    int i = l, j = h;
    while (i < j)
    {
        do
        {
            i++;
        } while (a[i] <= pivot);

        do
        {
            j--;
        } while (a[j] > pivot);

        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(l, a[j]);

    return j;
}

void quicksort(int l, int h)
{
    if (l < h)
    {
        int j = partition(l, h);
        quicksort(l, j);
        quicksort(j + 1, h);
        cout << "Once done" << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // quicksort(0, n-1);

    // cout << "The sorted array is: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    int c = partition(0, n - 1);
    cout << c;
}