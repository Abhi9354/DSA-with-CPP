#include <bits/stdc++.h>
using namespace std;
int findMin(vector<int>&v){
      int n = v.size();
      int s = 0 ;
      int e = n-1;
      int pivot =-1;
      while(s<=e){
        int mid =  s + (e-s)/2;
        if(mid==0)s=mid+1;
        else if(mid==n-1)e=mid-1;
        else if(v[mid]>v[mid-1] && v[mid]>v[mid+1]){
            pivot = mid+1;
            break;
        }
        else if(v[mid]<v[mid-1] && v[mid]<v[mid+1]){
            pivot = mid;
            break;
        }
        else if(v[mid]<v[e])e=mid-1;
        else s=mid+1;
      }
     if(n==1)return v[0];
         if(n==2){
             if(v[0]>v[1])return v[1];
             else return v[0];
         }
         else{
         if(pivot == -1)return v[0];
         else return v[pivot];
         }
}
int main(){
     vector<int>arr;
     arr={3,4,5,1,2};
    cout<<findMin(arr);
}