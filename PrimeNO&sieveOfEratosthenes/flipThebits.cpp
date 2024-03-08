#include <bits/stdc++.h>
using namespace std;
int betterApproach(int n)
{
    int original= n;
    n = n|n >> 1;
    n = n|n >> 2;
    n = n|n >> 4;
    n = n|n >> 8;
    // return (n+1)/2;
    //instead of return this u can do 
    return original^n;
}
int brain_kernighan(int n)
{
    int original= n;
    int temp;
    while (n != 0)
    {
        temp = n;
        n = n & (n - 1);
    }
    return original ^ (temp*2)-1;
}

int main()
{
    int n = 13;
    cout << brain_kernighan(n)<<endl;
    
    cout << betterApproach(n);
}