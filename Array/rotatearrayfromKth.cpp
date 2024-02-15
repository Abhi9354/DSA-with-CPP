#include <iostream>
using namespace std;
#include <vector>
int main(){
    int arr1[]= {2,6,5,8,9};
    int k = 3;
    int n = sizeof(arr1)/sizeof(arr1[0]);
    cout<<n;
int arr2[n];
    for(int i = 0 ;i< n ; i++){
        arr2[(i+k)%n]=arr1[i];
    }
for (int i = 0 ; i<n ;i++){
    cout<<arr2[i] <<" ";
}
return 0 ;
}