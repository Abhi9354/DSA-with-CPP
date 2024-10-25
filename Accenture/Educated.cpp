

#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> nums;
  nums = {0, 0, 1, 0, 0, 1, 0, 0};
  int sum = 0;
  int n = 0;
  bool flag = false;
  for (int i = 0; i < nums.size(); i++)
  {
    if (nums[i] == 0)
      n++;
    if (nums[i] == 1)
    {
      if (flag==false)
      {
        sum += (n * (n + 1)) / 2;
      }

      else
      {
        if (n % 2 == 0)
        {
          int even = n / 2;
          sum += 2 * ((even * (even + 1)) / 2);
        }
        else
        {
          int first = n / 2;
          int second = n - first;
          sum += ((first * (first + 1)) / 2) + ((second * (second + 1)) / 2);
        }
      }
      flag = true;

      n = 0;
    }
  }
  cout << endl;
  if (n != 0)
    sum += (n * (n + 1)) / 2;

  cout << sum;
}