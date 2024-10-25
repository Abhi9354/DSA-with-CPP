#include <bits/stdc++.h>
using namespace std;
int main(){
    pair<string,int>p1;
    unordered_map<string,int>mp;
    p1.first="Abhishek";
    p1.second=2;
    mp.insert(p1);    
    mp["harsh"]=5;
    for(pair i:mp)cout<<i.first<<" "<<i.second<<endl;
}