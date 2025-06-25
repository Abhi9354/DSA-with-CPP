

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
 int minSum(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int n = arr1.size();
        int mini1=INT_MAX;
        int mini2=INT_MAX;
        int idx1=-1;
        int idx2=-1;
        for(int i =0;i<n ;i++){
            
            if(arr1[i]<mini1){
                mini1= arr1[i];
                idx1=i;
            }
             if(arr2[i]<mini2){
                mini2= arr2[i];
                idx2=i;
            }
        }
        
        int ans1=0;
        int ans2=0;
        if(idx1!=idx2)return mini1+mini2;
        
        else{
            
                
                mini1=INT_MAX;
                for(int i =0 ; i<n ;i++)if(idx1!=i){
                    mini1=min(mini1,arr1[i]);
                }
                ans1=mini1+mini2;
           
                mini2=INT_MAX;
                for(int i =0 ; i<n ;i++)if(idx2!=i){
                    mini2=min(mini2,arr2[i]);
                }
                ans2=mini2+arr1[idx1];
            
        }

        return min(ans1,ans2);
    }
int main(){
    vector<int> arr1 = {
    5, 4, 13, 1
};

vector<int> arr2 = {
   3,2,6,1
};
    cout << minSum(arr1, arr2) << endl; 

}