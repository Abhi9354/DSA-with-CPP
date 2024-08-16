#include <bits/stdc++.h>
using namespace std;
int reverse(int n ){
    int r = 0;
            while(n>0){
                r*=10;
                r+=(n%10);
                n=n/10;
            }
            return r;
}
int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>sol;
        unordered_set<string>st;


        for(int i =0 ; i<nums.size();i++){
            int rev= reverse(nums[i]);
            sol.insert(rev);
            sol.insert(nums[i]);
        }
         
        return sol.size();
    }
int main(){
    vector<int>nums;
    nums={1,13,10,12,31};
    cout<< countDistinctIntegers(nums);
}