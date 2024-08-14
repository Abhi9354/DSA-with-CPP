#include <bits/stdc++.h>
using namespace std;
vector<int>stockSpan(vector<int>given){
  int n = given.size();
  stack<int>st;
  vector<int>sol(n,1);
  
  st.push(given[0]);
  for(int i=1 ;i<n;i++){
   if(given[i]>st.top()){
    int count=1;
    while(st.top()<given[i]){
       sol[i]= sol[i]+sol[i-count];
        count++;
        st.pop();
        
    }
    st.push(given[i]);
   }
   else{
    st.push(given[i]);
   }
  }

return sol;
}
int main(){
     vector<int>given;
    given={100,80,60,70,60,75,85};
    vector<int>ans=stockSpan(given);
    for(auto i:ans){
        cout<<i<<",";
    }
}