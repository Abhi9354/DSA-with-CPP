

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string num = "10101011";
    int size = num.size();
    int result = 0;

    for (int i = size - 1; i >= 0; i--)
    {
        char ch = num[i];
        int value = ch - '0';
        result = result + value * (1 << (size - i - 1));
    }
    cout << result;
}
