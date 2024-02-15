#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    // nums={1,2,3,4,5,5};
   
    
    nums.clear();
    nums.shrink_to_fit();
   for(int i =0 ; i<nums.capacity();i++){
    cout<<nums[i]<<endl;
   }



}
