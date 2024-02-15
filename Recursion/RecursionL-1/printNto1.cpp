#include <iostream>
using namespace std;
void print(int n)
{
  cout << n << endl;
  if (n == 1)
    return;
  print(n - 1);
}
int main()
{
  int n;
  cout << "enter the number" << endl;
  cin >> n;
  print(n);
}