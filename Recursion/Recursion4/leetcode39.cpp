#include <iostream>
#include <vector>
using namespace std;

void combinationSum(int arr[],int target,vector<int>ans,vector<vector<int>> &container,int idx,int n){
if(target==0){
    for(auto i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
    // container.push_back(ans);
    return ;

}
if(target<0){
    return;
}

     for(int i = idx ; i<n;i++){
          ans.push_back(arr[i]);
          combinationSum(arr,target-arr[i],ans,container,i,n);
          ans.pop_back();
     }

}

int main (){
    int arr[] = {2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 8;
    vector<int>v;
    vector<vector<int>>container;
    combinationSum(arr,target,v,container,0,n);
    // for(int i =0 ; i<container.size();i++){
    //     for(int j =0 ; j<container[0].size();i++){

    //     }
    // }
}