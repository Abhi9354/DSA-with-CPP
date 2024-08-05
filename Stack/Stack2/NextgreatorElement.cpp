
#include <bits/stdc++.h>
using namespace std;
vector<int>nge(vector<int>given){
    int n = given.size();
vector<int>sol(n);
sol[n-1]=-1;
stack<int>st;
st.push(given[n-1]);
for(int i = n-2;i>=0;i--){
    while(!st.empty() && st.top()<=given[i]){
      
        st.pop();
    }
    if(st.size()==0)sol[i]=-1;
    else sol[i]=st.top();
    st.push(given[i]);
}
return sol;
}

int main(){
    vector<int>given;
    given={3,1,2,5,4,6,2,3};
    vector<int>ans=nge(given);
    for(auto i:ans){
        cout<<i<<",";
    }
}