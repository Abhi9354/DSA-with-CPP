#include <bits/stdc++.h>
using namespace std;

    int minSubArrayLen(int target, vector<int>& arr) {
        int sum = 0 ;
        int n = arr.size();
        int minlen= INT_MAX;
        int i =0;
        int j=0;
        while(j<n){
         sum += arr[j];
         while(sum>=target){
             int len= j-i+1;
             minlen= min(minlen,len);
             sum-=arr[i];
             i++;
         }
         j++;
        }
        if(minlen==INT_MAX){
            return 0;
        }
  return minlen;
    }
int main(){
   int target = 7;
   vector<int> nums = {2,3,1,2,4,3};
   cout<<minSubArrayLen(target,nums);
   }