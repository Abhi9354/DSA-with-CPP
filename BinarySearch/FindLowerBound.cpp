#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(10);
    nums.push_back(11); 
    nums.push_back(12);
    nums.push_back(13);
    nums.push_back(14);
    nums.push_back(16);
    nums.push_back(17);
    int low = 0 ;
        int high = nums.size()-1;
        int target= 8;
        
        while(low<=high){
            int mid= low +(high- low)/2;
            if(target==nums[mid]){cout<<mid-1;
            break;}
            else if(target>nums[mid])low = mid+1;
            else high = mid-1;
        }
        cout<<nums[low]<<endl;//upper bound
        cout<<nums[high];//lower bound
    
}