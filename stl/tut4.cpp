//function objects : a function wrapped in a class so that it is available like an object

#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
	int arr[] = {1,3,4,54,12,7};
	
	sort(arr, arr+6);     //sorting in ascending order
	for(int i=0;i<6;i++){
		cout<<arr[i]<<endl;
	}
	
	sort(arr, arr+6, greater<int>());     //sorting in descending order
		for(int i=0;i<6;i++){
		cout<<arr[i]<<endl;
	}
	return 0;
}
