#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    stack<int> pt;
    stack<int> rt;

    while (st.size()>0)
    {
        pt.push(st.top());
        st.pop();
    }

    while (pt.size()>0)
    {
        cout << pt.top() << " ";

        rt.push(pt.top());
        pt.pop();
    }

    while (rt.size()>0)
    {
        cout << rt.top() << " ";
        rt.pop();
    }

    return 0;
}
