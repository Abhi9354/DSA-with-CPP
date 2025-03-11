//Print all increasing sequences of length k from first n natural numbers


#include <iostream>
#include <vector>
using namespace std;
 void func(vector<int>& nums,vector<int>ans,vector<vector<int>>& finalans,int idx,int k) {
        if(nums.size()==idx){
            if(ans.size()==k){
              finalans.push_back(ans);
            }
            
            return;
        }
     
     func(nums,ans,finalans,idx+1,k);
     ans.push_back(nums[idx]);
     func(nums,ans,finalans,idx+1,k);
    

    }

    vector<vector<int>> subsets(vector<int>& nums,int k) {
        vector<vector<int>> finalans;
        vector<int>ans;
        func(nums,ans,finalans,0,k);
        return finalans;
    }
int main(){
    int k = 2;
    vector<int>nums={1,2,3};
    vector<int>ans;
    vector<vector<int>>fans=subsets(nums,k);
    
    int m = fans.size();
    int n = fans[0].size();
    for(int i = 0 ; i<m;i++){
        for(int j = 0 ; j<n;j++){
           cout<<fans[i][j]<<" ";
        }
        cout<<endl;
    }
}