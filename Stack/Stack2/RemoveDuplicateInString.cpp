#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (st.empty())
        {
            st.push(s[i]);
        }
        else{
            if(s[i]!=st.top()){
              st.push(s[i]);
            }
        }
    }
     s="";
    while(!st.empty()){
        s+=st.top();
        st.pop();
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    string s = "aabbbcccddaann";
    cout << removeDuplicate(s);
}