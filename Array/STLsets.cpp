#include <bits/stdc++.h>
using namespace std;
#include<set>
int main(){
    set<int> s;

    
    int count = 0;
  
    s.insert(5);
    
    s.insert(3);
    s.insert(8);
    s.insert(6);
    s.insert(4);
    int n = s.size();
    vector<int> v(n);
    
    for(auto i : s){
        v[count++]=i;
    }
    cout<<endl;
    for(auto r : v){
        cout<<r<<",";
    }
    // for(auto i: s){
    //     cout<<i<<endl;
    // }
    // cout<<"after erasing"<<endl;
    // set<int>::iterator it= s.begin();
    // it++;
    // s.erase(it);
    //   for(auto i: s){
    //     cout<<i<<endl;
    // }
    // cout<<"element present or not "<<s.count(2)<<endl;
    // set<int>::iterator itr = s.find(5);
    // cout<<"find the iterator"<<*itr<<endl;
    // for(auto it=itr;it!=s.end();it++){
    //     cout<<*it<<endl;

    // }
}