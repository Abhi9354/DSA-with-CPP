#include <bits/stdc++.h>
using namespace std;
 int singleNonDuplicate(vector<int>& nums) {
    int n = nums.size();
    int s = 0 ;
    int e = n-1;
    if(n==1)return nums[0];
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1])return nums[mid];
        else if(nums[mid]==nums[mid+1]){
             if((s+mid+2)%2==0)s=mid+2;
             else e=mid-1;
        }
        else if(nums[mid]=nums[mid-1]){
             if((s+mid+1)%2==0)s=mid+1;
             else e=mid-2;
        }
        if(s==e)return nums[s];
    }
    return -1;
 }
int main(){
    vector<int>nums;
    nums={1,1,2,3,3,4,4,8,8};
     cout<<singleNonDuplicate(nums);
}