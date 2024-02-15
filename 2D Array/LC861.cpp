
#include <bits/stdc++.h>
using namespace std;
int matrixScore(vector<vector<int>>& v) {
        for(int i = 0 ; i<v.size();i++){
            if(v[i][0]==0){
                for(int j =0 ; j<v[i].size();j++){
                    if(v[i][j]==0)v[i][j]=1;
                    else v[i][j]=0; 
                }
            }
        }
           
        for(int j = 0 ; j<v[0].size();j++){
            int zero=0;
           int ones=0;
            for(int i = 0; i<v.size();i++){
                 if(v[i][j]==0)zero++;
                 else ones++;
            }
            if(zero > ones){
                for(int i = 0 ;i<v.size();i++){
                    if(v[i][j]==0)v[i][j]=1;            
                    else v[i][j]=0;
                      } }
        }
        int sum=0;        
        for(int i = 0 ; i<v.size();i++){
            int x= 1;
            for(int j = v[0].size()-1; j>=0;j--){
                sum+=x*v[i][j];
                x *= 2;
            }}

        return sum;
        }
    


int main (){
 vector<vector<int>>v;
 vector<int>v1;
 v1.push_back(0);
 v1.push_back(0);
 v1.push_back(1);
 v1.push_back(1);
  vector<int>v2;
 v2.push_back(1);
 v2.push_back(0);
 v2.push_back(1);
 v2.push_back(0);
  vector<int>v3;
 v3.push_back(1);
 v3.push_back(1);
 v3.push_back(0);
 v3.push_back(0);
 v.push_back(v1);
 v.push_back(v2);
 v.push_back(v3);

cout<< matrixScore(v);
}