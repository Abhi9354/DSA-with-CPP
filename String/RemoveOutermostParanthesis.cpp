#include <bits/stdc++.h>
using namespace std;
int main(){
    string s ="(()())(())";
    string res="";
    int opened=0;
    for(char c:s){
        if(c=='(' && opened++ > 0)  res +=c;
        if(c==')' && opened-- > 1)  res +=c;
        
    }
    cout<<res;
}