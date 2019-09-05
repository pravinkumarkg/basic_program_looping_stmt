#include <iostream>
using namespace std;

int main() {
	int i,n,temp;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	temp=arr[n-1];
	arr[n-1]=arr[0];
	arr[0]=temp;
	for(int i=0;i<n;i++)
	{
	cout<<arr[i]<<" ";
	}
	return 0; 
}
