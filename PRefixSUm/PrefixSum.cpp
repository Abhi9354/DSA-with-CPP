#include <bits/stdc++.h>
using namespace std;
int main() {
    int arr[] ={1,4,5,9,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum =0 ;
    int arr2[n];
    for(int i=0 ;i<n;i++){
      sum=sum+arr[i];
      arr2[i]=sum;
    }
    for(int i= 0 ;i<n;i++){
      cout<<arr2[i]<<endl;
    
    }

}