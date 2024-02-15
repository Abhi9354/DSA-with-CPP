#include <bits/stdc++.h>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
       for(int i =1 ;i<nums.size();i++){
        nums[i]=nums[i]+nums[i-1];
       }
return nums;
    }
int main(){
    vector<int>nums;
    nums = {1,2,3,4};
     vector<int>sol;
     sol= runningSum(nums);
     for(auto i:sol){
        cout<<i<<endl;
     }

}