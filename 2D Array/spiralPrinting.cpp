#include<iostream>
using namespace std;
int main(){
    int m = 4;
    int n = 5;
    int arr[m][n]={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20}};
    int minrow= 0;
    int mincol= 0;
    int maxrow=m-1;
    int maxcol=n-1;
    while(minrow<=maxrow && mincol<=maxcol){
        //Right
        for(int i = mincol ; i<=maxcol;i++){
            cout<<arr[minrow][i]<<"\t";
        }
        minrow++;
        
        //Down
        if(minrow>maxrow || mincol>maxcol)break;
         for(int i = minrow ; i<=maxrow;i++){
            cout<<arr[i][maxcol]<<"\t";
        }
        maxcol--;

        //left
        if(minrow>maxrow || mincol>maxcol)break;
         for(int i = maxcol ; i>=mincol;i--){
            cout<<arr[maxrow][i]<<"\t";
        }
        maxrow--;
        //Up
         if(minrow>maxrow || mincol>maxcol)break;
        for(int i = maxrow ; i>=minrow;i--){
            cout<<arr[i][mincol]<<"\t";
        }
        mincol++;



    }
    
}

/*class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
         int m = arr.size();
    int n = arr[0].size();
    int minrow= 0;
    int mincol= 0;
    int maxrow=m-1;
    int maxcol=n-1;
    vector<int>v;
    while(minrow<=maxrow && mincol<=maxcol){
        for(int i = mincol ; i<=maxcol;i++){
           v.push_back(arr[minrow][i]);
        }
        minrow++;      

        if(minrow>maxrow || mincol>maxcol)break;
         for(int i = minrow ; i<=maxrow;i++){
           
            v.push_back(arr[i][maxcol]);
        }
        maxcol--;

        if(minrow>maxrow || mincol>maxcol)break;
         for(int i = maxcol ; i>=mincol;i--){
            cout<<arr[maxrow][i]<<"\t";
             v.push_back(arr[maxrow][i]);

        }
        maxrow--;
        
         if(minrow>maxrow || mincol>maxcol)break;
        for(int i = maxrow ; i>=minrow;i--){
           
             v.push_back(arr[i][mincol]);
        }
        mincol++;
    }
    return v;
    }
};*/