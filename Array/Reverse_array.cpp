#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(3);
     v.push_back(7);
      v.push_back(12);
       v.push_back(11);
    
    int s= 0 ;
    int e= v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
      
    }
    for( int i:v){
        cout<<i<<",";
    }
    return 0;
}