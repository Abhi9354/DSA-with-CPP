//given an integer n , flip all the bits if the given bit is 1 change it to 0 and vice versa

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m = 10;
    int n =m;

    m = m | m >> 1;
    m = m | m >> 2;
    m = m | m >> 4;
    m = m | m >> 8;
    m = m | m >> 16;

    cout<<(m^n);

}