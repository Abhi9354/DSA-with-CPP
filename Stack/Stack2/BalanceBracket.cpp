#include <bits/stdc++.h>
using namespace std;
bool isBalanced(string given){
     if(given.size()%2!=0)return false;
     stack<int>st;
  for(int i =0 ; i<given.size();i++){
    if(given[i]=='('){
       st.push(given[i]);
    }
    else{
        if(st.size()==0)return false;
        st.pop();
    }
  }
  if(st.size()==0)return true;
  return false;
     
}
int main(){
   string given="())()()";
   cout<<isBalanced(given);    
}