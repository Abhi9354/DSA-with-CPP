#include <iostream>
using namespace std;
int SumOfOddNum(int a, int b)
{
    if (a % 2 == 0)
        a++;
    if (a % 2 == 1 && a > b)
        return 0;

    if (a % 2 == 1)
    {
        int sum = a + SumOfOddNum(a + 2, b);
        return sum;
    }
}
int main()
{
    int a, b;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b : ";
    cin >> b;

    cout << SumOfOddNum(a, b);
}