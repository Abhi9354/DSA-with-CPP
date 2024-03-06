#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(string &num)
{
    int n = num.size();
    int number = stoi(num);
    string result = "";
    while (number > 0)
    {
        int lastDigit = number % 2;
        char ch = '0' + lastDigit;

        result = ch + result;

        number = number / 2;
    }
    cout << result;
}
int main()
{
    string num = "118";
    BinaryToDecimal(num);
}