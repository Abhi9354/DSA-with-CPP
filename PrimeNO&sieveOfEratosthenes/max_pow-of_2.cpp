#include <bits/stdc++.h>
using namespace std;
int betterApproach(int n)
{
    n = n|n >> 1;
    n = n|n >> 2;
    n = n|n >> 4;
    n = n|n >> 8;
    // return (n+1)/2;
    //instead of return this u can do 
    return (n+1)>>1;
}
int brain_kernighan(int n)
{
    int temp;
    while (n != 0)
    {
        temp = n;
        n = n & (n - 1);
    }
    return temp;
}
int main()
{
    int n = 100;
    cout << brain_kernighan(n)<<endl;
    cout << betterApproach(n);
}