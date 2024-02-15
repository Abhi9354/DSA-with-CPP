#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
           int k = 0;
        for(auto it = nums.begin(); it != nums.end();){
            if(*it == val){
                nums.erase(it);
            }else{
                k++;
                it++;
            }
        }
        return k;
    }
       
    



int main(){
    vector<int>nums;
    int val = 2;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(3);
   cout<< removeElement(nums,val); 

}