#include <bits/stdc++.h>
using namespace std;

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k<=1)return 0;
        int n = nums.size();
        int i = 0;
        int j = 0;
        int prod = 1;
        int count = 0;
        while (j< n) {
           prod= prod*nums[j];
           while(prod>=k){
               count+=(j-i);
               prod/=nums[i];
               i++;
           }
           j++;
        }
        while(i<n){
               count+=(j-i);
               prod/=nums[i];
               i++;
           }
        return count;
    }
int main(){
   int target = 100;
   vector<int> nums = {10,5,2,6};
   cout<<numSubarrayProductLessThanK(nums,target);
   }