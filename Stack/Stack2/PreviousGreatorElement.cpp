#include <bits/stdc++.h>
using namespace std;
vector<int>pge(vector<int>given){
  int n = given.size();
  stack<int>st;
  vector<int>sol(n);
  sol[0]=-1;
  st.push(given[0]);
  for(int i=1 ;i<n;i++){
   if(given[i]<st.top()){
         sol[i]=st.top();}
   else{
    st.pop();
    sol[i]=-1;
    st.push(given[i]);
   }
  }

return sol;
}
int main(){
     vector<int>given;
    given={3,1,2,5,4,6,2,3};
    vector<int>ans=pge(given);
    for(auto i:ans){
        cout<<i<<",";
    }
}