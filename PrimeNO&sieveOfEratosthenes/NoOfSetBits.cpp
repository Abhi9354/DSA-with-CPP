#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(int num)
{
    int count = 0;
    // while (num > 0)
    // {
    //     if (num % 2 == 1)
    //     {
    //         count++;
    //     }
    //     num = num / 2;
    // }
    // cout<<count;

    while(num>0){
        count++;
        num=num&(num-1);

    }
    cout<<count;
}
int main()
{
    int num = 118;
    BinaryToDecimal(num);
}