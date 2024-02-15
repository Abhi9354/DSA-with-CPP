#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int thirdMax(vector<int>& nums) {
        set<int>sol;
        int count = 0 ;
        copy(nums.begin(),nums.end(),inserter(sol,sol.begin()));
        nums.clear();
        copy(sol.begin(),sol.end(),back_inserter(nums));
        
        reverse(nums.begin(),nums.end());
        if(nums.size()<3){
            return nums[0];
        }
        else{
            return nums[2];
        }

    }
int main(){
    vector<int>nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(1);
    
cout<<thirdMax(nums);
}