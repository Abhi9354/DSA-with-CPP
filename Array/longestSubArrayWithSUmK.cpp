#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int sum = 0;
    int s = 0;
     int n = a.size()-1;
    int maxi=0;
    int count=0;
    int temp = 0;
    while(s<=n){
        sum = sum+a[s];
        if(sum==k){
            count++;
            temp = count;
            count = 0;
            sum=0;
            s++;
        }
       else if(sum<k){
            count++;
            s++;
               }
           else{
               count= 0;
               sum=0;
               s++;
           } 
     maxi = max(maxi,temp);   

    }
    return maxi;
}
int main (){
    vector<int>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(1);
    a.push_back(1);
    a.push_back(1);
   
    int k = 3;
  cout<<longestSubarrayWithSumK(a,k);
}