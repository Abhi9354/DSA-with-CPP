#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return false;
    return true;
}

int smallestValue(int n)
{
    if (isPrime(n) || n == 4)
        return n;
    int sum = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0 && isPrime(i))
        {
            int m = n;
            while (m % i == 0)
            {
                sum = sum + i;
                m = m / i;
            }
        }
        if (n / i != i && isPrime(n / i))
        {
            int m = n;
            while (m % (n / i) == 0)
            {
                sum = sum + (n / i);
                m = m / (n / i);
            }
        }
    }

    return smallestValue(sum);
}
int main()
{
    int n = 60;
    cout << smallestValue(n);
}