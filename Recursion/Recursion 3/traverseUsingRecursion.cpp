

#include <bits/stdc++.h>
using namespace std;

void display (vector<int>& arr , int n , int idx){
    if(idx==n)return;
    cout<<arr[idx]<<" ";
    display(arr,n,idx+1);
}

int main(){
    vector<int>arr={1,2,3,4,5};
    int n = arr.size();
    display(arr,n,0);
}