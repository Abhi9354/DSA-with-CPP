#include <bits/stdc++.h>
using namespace std;
int maze(int er, int ec)
{
    if ( er < 1 || ec < 1)
        return 0;
    // base case when source and destination are same then return 1
    if (er == 1 && ec == 1)
        return 1;
    /* Recursively move to all four directions from the current position */
    int rightways = maze(er, ec - 1);
    int downways = maze(er - 1, ec);
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    cout << maze(3,3);
    return 0;
}