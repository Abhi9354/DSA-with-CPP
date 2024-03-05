#include <bits/stdc++.h>
using namespace std;
 int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int len=INT_MIN;
        int maxlen=INT_MIN;
        int i=0,j =0;
        int flip=0;
        while(j<n){
            if(nums[j]==1){
                j++;
            }
            else{
                //nums[j]=0
             if(flip<k){
                flip++;
                j++;
             }
             else {
                 len=j-i;
                 maxlen= max(maxlen,len);
                 while(nums[i]==1)i++;
                 i++;
                 j++;
             }
            }
        }
        len=j-i;
                 maxlen= max(maxlen,len);
                 return maxlen-1;
    }
 
int main(){
   int k = 1;
   vector<int> nums = {0,1,1,1,0,1,1,0,1};
   cout<<longestOnes(nums,k);
   }