#include <bits/stdc++.h>
using namespace std;
int pow(int x, int n)
{
    if (n == 1)
        return x;
    int ans = pow(x, n / 2);
    if (n % 2 == 0)
        return ans * ans;
    else
        return x * ans * ans;
}
int main()
{
    int base, exponent;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    cout << base << " raised to the power of " << exponent << " is " << pow(base, exponent) << endl;
    return 0;
}