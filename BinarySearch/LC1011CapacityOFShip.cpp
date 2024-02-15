#include <bits/stdc++.h>
using namespace std;
bool check(int mid, int days, vector<int>nums){
    int m = mid ;
    int count= 1;
    for(int i = 0 ; i<nums.size();i++){
       if(mid>=nums[i]){
        mid-=nums[i];
       }
       else{
        count++;
        mid= m ;
        mid-=nums[i];
       }
    }
    if(count>days)return false;
    else return true;
    
}
int shipWithDays(vector<int>&nums,int days){
    int n=nums.size();
    int sum = 0;
    int maxi=0;
    for(int i = 0 ; i<n ; i++){
        sum += nums[i];
         maxi= max(maxi,nums[i]);
    }
    int s = maxi;
    int e= sum;
    int minCapacity = 0;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(check(mid,days,nums)){
            minCapacity= mid;
            e = mid -1;
        }
        else{
             s= mid+1;
        }

    }
    return minCapacity;
}

int main(){
    ///capacity to ship packages within D days
    vector<int>nums;
    nums={3,2,2,4,1,4};
    int days=3;
    cout<<shipWithDays(nums,days);
}