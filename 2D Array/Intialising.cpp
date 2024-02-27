#include <bits/stdc++.h>
using namespace std;
int main (){
    int m =3;
    int n = 4;
        vector<vector<int>>sol(m,vector<int>(n,0));

    for(int i = 0 ; i<m ; i++){
        for (int j = 0; j<n;j++){
            cout<<sol[i][j]<<",";
        }
        cout<<endl;
    }
}