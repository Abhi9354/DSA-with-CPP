#include <bits/stdc++.h>
using namespace std;

    
    vector<int> rearrangeArray(vector<int>& nums) {
    int even = 0 ; 
    int odd = 1;
     vector<int>ans(nums.size());
     for(int i = 0 ; i<nums.size();i++){
         if(nums[i]>=0){
             ans[even]=nums[i];
             even= even +2;
         }
         else{
             ans[odd]=nums[i];
             odd= odd+2;
         }
     }
     return ans;
     
    }

int main(){
    vector<int>nums;
    nums.push_back(-2);
    nums.push_back(-4);
    nums.push_back(3);
    nums.push_back(1);
    nums.push_back(-5);
    nums.push_back(9);
    rearrangeArray(nums);

}