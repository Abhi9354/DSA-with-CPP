#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(0);
    nums.push_back(1);
      set<int> v;
        copy(nums.begin(), nums.end() , inserter(v , v.begin()));
        if(v.size()==1 ) return 1;
        if(v.size()==0) return 0;
        nums.clear();
        int a = 0 ;
        for(auto i : v)  nums.push_back(i);
        int count = 1 ;
        int temp = 0;
         for(int i = 1; i<nums.size() ; i++)
         {
            if(nums[i-1]==nums[i]-1)count++;
            else{
                   if(temp<count)temp = count;  
                count=1;
            }
         }
         if(temp<count || temp == 0)  return count;
          return temp;
           
    }
