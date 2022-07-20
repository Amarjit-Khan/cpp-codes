//Bubble sort
//Repeatedly swap two adjacent elements if they are in wrong order
//For an array of n elements we have to do n-1 itterations at most to get the sorted array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int counter=1;
	while(counter<n){
		for(int i=0;i<n-counter;i++){
			if(arr[i]>arr[i+1]){
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
		counter++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
