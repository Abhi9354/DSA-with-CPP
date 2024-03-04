
#include <bits/stdc++.h>
using namespace std;
int maxSatisfied(vector<int>& arr, vector<int>& grumpy, int minutes) {
       int k = minutes;
       int n = arr.size();
       int prevLoss = 0;
       for (int i = 0 ; i<k;i++){
        if(grumpy[i]==1)prevLoss+=arr[i];
       }
       int i = 1;
       int j = k;
       int maxLoss=prevLoss;
       int idx=0;
       while(j<n){
       int curr= prevLoss;

           if(grumpy[j]==1)curr+=arr[j];
           if(grumpy[i-1]==1)curr+=arr[i-1];
           if(curr>maxLoss){
               maxLoss=curr;
               idx=i;
           }
           i++;
           j++;
       }
       for(int i = idx;i<idx+k;i++){
           grumpy[i]=0;
       }
       int maxSatis=0;
       for(int i = 0 ; i<n; i++){
           if(grumpy[i]==0){
            maxSatis+=arr[i];
           }
       }
       return maxSatis;

    }
int main(){
    vector<int>customers;
    customers={1,0,1,2,1,1,7,5};
    vector<int>grumpy;
    grumpy={0,1,0,1,0,1,0,1};
    int minutes=3;
   cout<< maxSatisfied(customers, grumpy, minutes);

}