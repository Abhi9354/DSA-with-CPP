#include <bits/stdc++.h>
using namespace std;

vector<int> nse(vector<int> heights)
{
    int n = heights.size();
    vector<int> nsi(n);

    stack<int>st;
    nsi[n - 1] = n;

    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        if (heights[i] < st.top())
        {
            int count = 1;
            while ( !st.empty() && heights[st.top()] >=heights[i] )
            {
               
                count++;
                st.pop();

                if (!st.empty())
                {
                    nsi[i] = n;
                    st.push(heights[i]);
                    break;
                }
            }
            nsi[i] = i + count;
            st.push(heights[i]);
            cout<<st.top()<<endl;
        }
        else
        {
            nsi[i] = i + 1;
            st.push(heights[i]);
        }
    }
    return nsi;
}

int main()
{
    vector<int> given;
    given = {2, 1, 5, 6, 2, 3};
    vector<int> ans = nse(given);
    for (auto i : ans)
    {
        cout << i << ",";
    }
}