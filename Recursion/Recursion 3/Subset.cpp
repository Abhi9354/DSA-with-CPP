#include <bits/stdc++.h>
using namespace std;
void print(string given, string ans)
{
    if (given.size() == 0)
    {
        cout << ans<<" "<<endl;
        return;
    }
    char ch = given[0];

    print(given.substr(1), ans + ch);
    print(given.substr(1), ans );

}

int main()
{
    string given = "abc";
    string ans = "";
    print(given, ans);
}