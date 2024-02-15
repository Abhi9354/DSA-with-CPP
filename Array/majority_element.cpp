#include <bits/stdc++.h>
using namespace std;
int firstOcc( vector<int> arr , int n , int key ){
    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1;

    while ( start<= end ){
        if ( arr[mid] == key ){
         ans = mid;
         end = mid - 1 ;
        }
        else if ( key > arr[mid]){
            start = mid + 1 ;
        
        }
        else if (key < arr[mid]){
            end = mid - 1;

        }
         mid = start + (end - start)/2 ;
    }
    return ans;
    }


    int lastOcc( vector<int>arr , int n , int key ){
    int start = 0 ;
    int end = n-1 ;
    int mid = start + (end - start)/2 ;
    int ans = -1;

    while ( start<= end ){
        if ( arr[mid] == key ){
         ans = mid;
         start = mid +1 ;
        }
        else if ( key > arr[mid]){
            start = mid + 1 ;
        
        }
        else if (key < arr[mid]){
            end = mid - 1;

        }
         mid = start + (end - start)/2 ;
    }
    return ans;
    }
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int>sol;
        int max= 0;
        copy(nums.begin(),nums.end(),inserter(sol,sol.begin()));
        int m = sol.size();
        int n = nums.size();
        int totalOCC;
        int maxelement;
        for(auto i : sol){
           
        totalOCC=(lastOcc(nums,n,i)-firstOcc(nums,n,i))+1;
        if(max < totalOCC){
            maxelement= i;
        }
        }
        return maxelement;
    }
int main (){
    vector<int>v;
    v.push_back(2);
    v.push_back(2);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
     cout<<majorityElement(v);
    
}