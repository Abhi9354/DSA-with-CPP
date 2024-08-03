#include <bits/stdc++.h>
using namespace std;

void recPushAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }
    int x = st.top();
    st.pop();
    recPushAtBottom(st, val);
    st.push(x);
}

void displaystack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int x = st.top();
    st.pop();
    displaystack(st);
    cout << x << " ";
    st.push(x);
}

void reverseStack(stack<int> &st)
{
    if (st.size() == 0)
    {
        return;
    }
    int x = st.top();
    st.pop();
    reverseStack(st);
    recPushAtBottom(st, x);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    cout << "Original stack: ";
    displaystack(st);
    cout << endl;

    reverseStack(st);

    cout << "Reversed stack: ";
    displaystack(st);
    cout << endl;

    return 0;
}
