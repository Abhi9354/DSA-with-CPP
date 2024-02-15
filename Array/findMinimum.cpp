#include <bits/stdc++.h>
using namespace std;
int main (){
    int arr []={3,33,45,76,2,324,65,67,751,0,54,8,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int max=INT_MIN;
    int min = INT_MAX;
    for (int i=0 ; i<n-1;i++){
        if(arr[i]<arr[i+1]){
            if(arr[i]<min){
                min = arr[i];
            }
            if(max<arr[i+1]){
                max = arr[i+1];
            }
        }
        else{
            if(arr[i+1]<min){
                min = arr[i+1];
            }
            if(arr[i]>max){
                max = arr[i];
            }
        }
    }
    cout<<max<<endl<<min;
}