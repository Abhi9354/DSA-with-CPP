
#include <bits/stdc++.h>
using namespace std;


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


vector<vector<int>>a(v);
for(int i = 0 ; i<4;i++){
    for(int j = 0 ; j<4;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}