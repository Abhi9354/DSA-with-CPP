#include <bits/stdc++.h>
using namespace std;
int maze(int sr,int sc,int er, int ec)
{
    if ( sr > er || sc > ec)
        return 0;
    // base case when source and destination are same then return 1
    if (er == sr && ec == sc)
        return 1;
    /* Recursively move to all four directions from the current position */
    int rightways = maze(sr, sc + 1,er,ec);
    int downways = maze(sr + 1, sc ,er,ec);
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    cout << maze(1,1,5,4);
    return 0;
}   