//print all sub arrays of an array
//subarray is a contiguous part of an array
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++){          //starting point loop
		for(int j=i;j<n;j++){      //ending point loop
			for(int k=i;k<=j;k++){ //printing numbers between the first and last index i.e i and j
				cout<<a[k]<<" ";
			}cout<<endl;
		}
	}
}
