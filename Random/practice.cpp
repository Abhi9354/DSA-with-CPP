//count the no. of elements in given array greater than a given number x
#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n:";
	cin>>n;
	int arr[n];                          
	for(int i=0;i<n;i++){
		cin>>arr[i];l;
	}
  for(int i = 0 ;i<n;i++){
    cout<<arr[i]<<" ";
  }
	int x;
	cout<<"enter the value of x:";
	cin>>x;
	int count=0;
	for(int i=0;i<=n-1;i++){
		if(arr[i]>x)
		count++;
	}
	cout<<count;
}