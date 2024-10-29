// single number 2



#include <bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
        int ans =0;
        for( int i = 0 ; i<32;i++){
                int count= 0;
            for(int j = 0 ; j<nums.size(); j++){
                if((nums[j]>>i) & 1){
                  count++;
                }
            }
            if(count%3){
                ans = ans | (count%3)<<i;
            }
        }
        return ans;
    }
int main(){
    vector<int>nums={2,2,3,2};
int ans=singleNumber(nums);
    cout<<ans;

}