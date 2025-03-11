// if the string  has duplicate element
#include <bits/stdc++.h>
using namespace std;
void print(string given, string ans, bool flag)
{
    sort(given.begin(),given.end());
    if (given.size() == 0)
    {
        cout << ans << " " << endl;
        return;
    }
    char ch = given[0];
    if (given.size() == 1)
    {
        if (flag == true)
            print(given.substr(1), ans + ch, true);
        print(given.substr(1), ans, true);
        return;
    }
    char dh = given[1];
    if (ch == dh)
    {
        if (flag == true)
            print(given.substr(1), ans + ch, true);
        print(given.substr(1), ans, false);
    }
    else
    {
        if (flag == true)
            print(given.substr(1), ans + ch, true);
        print(given.substr(1), ans, true);
    }
}

int main()
{
    string given = "aab";
    string ans = "";
    print(given, ans, true);
}