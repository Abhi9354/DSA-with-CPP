#include<iostream>
#include <vector>
using namespace std;

vector<int>twoSum(vector<int>&nums,int target){
int s =0;
        int e =s+1;
        vector<int>sol;
        while(s<e){
            
            if(nums[s]+nums[e]==target){
                sol.push_back(s);
                sol.push_back(e);
                return sol;
            }
            if(e==nums.size()-1){
                s++; 
                e=s+1;
                continue;
            }
            e++;
        }
     




}

int main(){
vector<int>nums;
// nums.push_back(2);
// nums.push_back(7);
// nums.push_back(11);
// nums.push_back(15);
nums.push_back(3);
nums.push_back(2);
nums.push_back(4);
int target = 6;
cout<< twoSum(nums , target)[0] <<endl ;

}