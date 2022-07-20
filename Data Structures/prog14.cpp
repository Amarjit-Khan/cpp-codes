// Randomized partition algo
// Using it to find the kth smallest element

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < j)
            swap(arr, i, j);
    }
    swap(arr, low, j);
    return j;
}

int kthSmallestElement(int arr[], int low, int high, int k)
{
    if (low <= high)
    {
        int p = partition(arr, low, high);
        if (p == k - 1)
        {
            return arr[p];
        }
        if (p > k - 1)
            return kthSmallestElement(arr, low, p, k);
        if (p < k - 1)
            return kthSmallestElement(arr, p + 1, high, k);
    }
    return -1;
}

int main()
{
    int arr[] = {4, 2, 1, 7, 5, 3, 8, 10, 9, 6};
    int k = 7;
    int ans = kthSmallestElement(arr, 0, 10 - 1, k);
    cout << "kth smallest element is : " << ans;
}