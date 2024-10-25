#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
  vector<int> arr;
  void push(int ele)
  {
    arr.push_back(ele);
  }
  int top()
  {
    int n = arr.size();
    return arr[n - 1];
  }
  void pop()
  {
    arr.pop_back();
  }
};
int main()
{
  Stack ss;
  ss.push(10);
  cout << ss.top();
}