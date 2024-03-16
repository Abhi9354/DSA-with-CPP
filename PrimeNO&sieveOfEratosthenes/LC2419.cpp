#include <bits/stdc++.h>
using namespace std;

  int longestSubarray(vector<int>& nums) {
        int n = nums.size();
             int maxele= INT_MIN;
        int i =0;
        int count=0;
        int idx=-1;
        int ans =0;
         for( int i = 0 ; i<n;i++){
            maxele= max(maxele,nums[i]);            
        }
        for(int i = 0 ; i<n;i++){
            if(nums[i]==maxele){
                count++; 
            }
            if(nums[i]!=maxele){
                count=0;
            }
            ans=max(count,ans);
            
        }
        return ans;
    }
int main(){
    vector<int>nums={1,2,3,3,2,2};
    cout<<longestSubarray(nums);
    
}