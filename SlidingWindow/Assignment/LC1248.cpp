#include <bits/stdc++.h>
using namespace std;
int numberOfSubarrays(vector<int>& a, int k) {
         int n = a.size();
       int count =0;
       int odd= 0;
       int i =0;
       int j= 0;
       int ans= 0;
       while(j<n){
           if(a[j]%2==1){
               count=0;
               odd++;
           }
           while( i<=j && odd==k){
               count++;
               if(a[i++]%2==1)odd--;
           }
           ans+=count;
           j++;
       }
       return ans;
    }
int main(){
    vector<int>nums={2,2,2,1,2,2,1,2,1,2};
    long long k = 2;
    cout<<numberOfSubarrays(nums,k);
}