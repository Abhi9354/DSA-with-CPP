#include <bits/stdc++.h>
using namespace std;
int climbingStairs(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return climbingStairs(n - 1) + climbingStairs(n - 2);
}
int main()
{
    int n;
    cin >> n;
    cout<<"number is "<<n;
    cout << climbingStairs(n) << endl;
}