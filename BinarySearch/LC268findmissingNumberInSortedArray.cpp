#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(0);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);
    int low = 0 ;
        int high = nums.size()-1;
        int ans = -1;
        
        while(low<=high){
            int mid= low +(high- low)/2;
            if(mid==nums[mid])low=mid+1;
            else{
                ans=mid;
                high=mid-1;
            }
        }
        cout<<ans;
    
}