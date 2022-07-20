//Merge sort
//Base on divide on conquer mechanism
//We keep on dividing the array until each sublist contains exactly 1 number.
//The we merge this sublists to produce new sorted sublists.
//We keep on merging the sublists until we get a fully sorted sublist containing all numbers.
//nlogn --> time complexity.
#include<iostream>
using namespace std;

void merge(int arr[],int l,int mid,int r)
{
	int n1=mid-l+1;
	int n2=r-mid;
	
	int a[n1];
	int b[n2];
	
	for(int i=0;i<n1;i++)
	{
		a[i]=arr[l+i];
	}
	for(int i=0;i<n2;i++)
	{
		b[i]=arr[mid+1+i];
	}
	
	int i=0;
	int j=0;
	int k=l;
	while(i<n1 && j<n2)
	{
		if(a[i]<b[j]){
			arr[k]=a[i];
			k++;
			i++;
		}
		else{
			arr[k]=b[j];
			k++;
			j++;
		}
	}
	
	while(i<n1)
	{
		arr[k]=a[i];
			k++;
			i++;
	}
	
	while(j<n2)
	{
		arr[k]=b[j];
			k++;
			j++;
	}
}

void mergesort(int arr[], int l, int r)
{
	if(l<r){
		int mid = (l+r)/2;
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,r);
		
		merge(arr,l,mid,r);
	}
}

int main()
{
	int arr[]={5,4,3,6,1};
	mergesort(arr,0,4);
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
