#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotate(vector<int>nums,int k ){
    int n = nums.size();
    
    reverse(nums.begin(),nums.end()-k);
    reverse(nums.end()-k,nums.end());
    reverse(nums.begin(),nums.end());
    for(int i :nums){
        cout<<i<<",";
    }
}

int main (){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    int k = 3;
    

    rotate(nums,k);
    
}