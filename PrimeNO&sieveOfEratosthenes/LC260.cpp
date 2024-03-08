#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans= 0;
        int k =0;
        for(int i = 0 ;i<n;i++){
            ans= ans^nums[i];
        }
        int temp = ans;
        while(true){
            if((temp&1)==1){
                break;
            }
            temp = temp>>1;
            k++;
        }
        int ans1= 0;
        for(int i = 0 ; i<n;i++){
           if(((nums[i]>>k)&1)==1){
               ans1^=nums[i];
           }
        }
        int ans2=ans1^ans;

        return {ans2,ans1};
    }
int main(){
    vector<int>arr={1,2,1,3,2,5};
    vector<int>ans=singleNumber(arr);
    for(auto i :ans){
        cout<<i;
    }
    
    
}