#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        prefix[0]=nums[0];
        suffix[n-1]=nums[n-1];
        for(int i =1; i<n;i++)prefix[i]=prefix[i-1]+nums[i];
        for(int i = n-2;i>=0;i--)suffix[i]=suffix[i+1]+nums[i];
        for(int i = 0 ;i<n;i++)if(prefix[i]==suffix[i])return i ;
     return -1;
    }
int main(){
    vector<int>nums;
    nums = {1,7,3,6,5,6};
    pivotIndex(nums);
}