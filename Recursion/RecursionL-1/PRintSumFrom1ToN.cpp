#include <iostream>
using namespace std;
int sum(int x)
{
    if (x == 0)
        return 0;
    int ans = x + sum(x - 1);
    return ans;
}
int main()
{
    cout << sum(10);
}