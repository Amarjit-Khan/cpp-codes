//Maximum subarray sum
//by this bruteforce method time complexity becomes high
#include<iostream>
#include<climits>
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
	int maxsum = INT_MIN;
	cout<<maxsum<<endl;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			int sum=0;
			for(int k=i;k<=j;k++){
				sum=sum+a[k];
			}
			maxsum = max(maxsum,sum);
		}
	}
	cout<<maxsum<<endl;
}
