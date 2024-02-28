#include <bits/stdc++.h>
using namespace std;
vector<int> NumArray(vector<int>& nums) {
    vector<int>prefix;

        prefix=vector<int>(nums.size());
        int n = nums.size();
        prefix[0]=nums[0];
        for(int i=1 ; i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        return prefix;
    }
 int sumRange(vector<int>range,vector<int>prefix) {
      if(range[0]==0)return prefix[range[1]];
        else return prefix[range[1]]-prefix[range[0]-1];
    }
int main(){
    vector<int>numArray;
    numArray={-2, 0, 3, -5, 2, -1};
    vector<int>prefix=NumArray(numArray);
    vector<vector<int>>range;
    range = {{0,2},{2,5},{0,5}};
    vector<int>final(range.size());
    for(int i = 0 ; i<range.size();i++){
    final[i]=sumRange(range[i],prefix);

    }

    for(auto i:final){
        cout<<i<<",";
            }

}