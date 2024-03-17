#include <bits/stdc++.h>
using namespace std;
 bool isPrime(int x ){
    for(int i = 2 ; i<=sqrt(x);i++) if(x%i==0)return false;
    return true;
  }
    int diagonalPrime(vector<vector<int>>& nums) {
        int m = nums.size();
        int mx= 0;
        for(int i =0 ; i<m ; i++){
            if(nums[i][i]!=1 && isPrime(nums[i][i]) )mx=max(mx,nums[i][i]);           
            if(nums[i][m-i-1]!=1 && isPrime(nums[i][m-i-1]))mx=max(mx,nums[i][m-i-1]);
        }
        return mx;
    }
int main(){
    vector<vector<int>>nums= {{1,2,3},{5,6,7},{9,10,11}};
    cout<<diagonalPrime(nums);
}