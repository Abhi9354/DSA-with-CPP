int countPrime = 0;
for (int i = 2; i < n; i++)
{
    int count = 0;
    for (int j = 2; j <= sqrt(x); j++)
    {
        if (x % j == 0)
            count++;
    }
    if (count > 0)
        continue;
    else
        countprime++;
}
return countPrime;