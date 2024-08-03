#include <bits/stdc++.h>
#include <stack>
using namespace std;
void pushAtIndex(stack<int>& st,int val,int idx){
    stack<int>pt;

    while(st.size()>idx){
      pt.push(st.top());
      st.pop();
    }
    st.push(val);
    while(pt.size()>0){
        st.push(pt.top());
        pt.pop();
    }
     while(st.size()>0){
       cout<<st.top()<<endl;
       st.pop();
    }
   
}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    stack<int> pt;
    stack<int> rt;
   pushAtIndex(st,15,1);

    return 0;
}
