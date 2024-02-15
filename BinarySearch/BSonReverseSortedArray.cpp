#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>v,int n,int k ){
       int l = 0;
       int h= n-1;
       int mid;
       while(l<=h){
        mid=l+(h-l)/2;
        if(v[mid]==k)return mid;
        else if(v[mid]>k)l= mid+1;
        else h=mid-1;
       }
       return -1;
}
int main (){
    vector<int>v ;
    v={10,9,8,7,6,5,4,3,2,1};
    int k = 7;
    int n = v.size();
    cout<<binarySearch(v,n,k);
}