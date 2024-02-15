#include <bits/stdc++.h>
using namespace std;
 int fib(int n) {
        vector<int>v(2);
        // v.push_back(0);
        // v.push_back(1);
     int s=0;
       int e=1;
       for(int i = 0;i<=n;i++){
        if(i==0) {v[i]=0;
        continue;}
        if(i==1){ v[i]==1;
        continue;}
           v[i]=v[s]+v[e];
           
           s=e;
           e++;
       }
       for(auto i :v){
        cout<<i<<",";
       }
    }
int main(){
int n =3;
fib(n);
}