#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 48;
    int low = 0;
    int high = x;
    int ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid == x)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    ans = high;
    cout << ans;
}

