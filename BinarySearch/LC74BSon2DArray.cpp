#include <bits/stdc++.h>
using namespace std;
bool searchMatrix(vector<vector<int>>& v, int k) {
        int l= 0;
        int h = v.size()-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(l==h)break;
            if(v[mid][0] == k){
                return true;
            }
            if(v[mid][0]>k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        int arr=l;
        l=0;
        h= v[arr].size()-1;
        while(l<=h){
             int mid = l+(h-l)/2;
           
            if(v[arr][mid] == k){
                return true;
            }
            if(v[arr][mid]>k){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
  return false;
        
    }
int main (){
    vector<vector<int>>matrix;
    matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    // for(int i = 0 ; i<matrix.size();i++){
    //     for(int j = 0 ;j<matrix[0].size();j++){
    //       cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int target = 3;
    cout<<searchMatrix(matrix,target);
}