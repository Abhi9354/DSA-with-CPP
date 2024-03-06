#include <bits/stdc++.h>
using namespace std;
 long long countSubarrays(vector<int>& nums, long long target) {
        long long sum = 0 ;
        int n = nums.size();
        long long len=0;
        int i =0;
        int j=0;
        long long count=0;
        while(j<n){
         sum += nums[j];
         len=j-i+1;
         while(sum*len>=target){
             count= count + (j-i);
             sum-=nums[i];
             len-=1;
             i++;
         }
         j++;
        }
        while(i<n){
            count= count + (j-i);
             sum-=nums[i];
             len-=1;
             i++;
        }
       
  return count;
    }
int main(){
    vector<int>nums={2,1,4,3,5};
    long long k = 10;
    cout<<countSubarrays(nums,k);
}