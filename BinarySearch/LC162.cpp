#include <bits/stdc++.h>
using namespace std;
 int findPeakElement(vector<int>& nums) {
     int s= 0;
     int n = nums.size();
     int e = n-1;
     while(s<e){
        int mid = s+(e-s)/2;
        if(nums[mid]>nums[mid+1])e=mid;
        else s=mid+1;  
     }
     return e;
 }
int main(){
    vector<int>arr;
    arr={1,2,1,3,5,6,4};
   cout<<findPeakElement(arr);

}