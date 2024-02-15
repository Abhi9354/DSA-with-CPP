//Next permutation
#include <iostream> 
#include <vector>
#include <algorithm> 
using namespace std;
void nextPermutation(vector<int>& nums) {
       int index = -1;
       int n = nums.size();
       for(int i= n-2;i>=0;i--){
           if(nums[i]<nums[i+1]){
               index= i;
               break;
           }
           
       }
       if (index==-1){
           reverse(nums.begin(),nums.end());
           return;
       }
       
        reverse(nums.begin()+index+1,nums.end());
        for(int i = index+1;i<n;i++){
            if(nums[i]>nums[index]){
                swap(nums[index],nums[i]);
                break;
            }
        }
        return;

}
int main(){
vector<int> nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(5);
nums.push_back(4);

nextPermutation(nums);

for(auto i:nums){
    cout << i <<" ";
}
}
   
