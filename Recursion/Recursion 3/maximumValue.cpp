

#include <bits/stdc++.h>
using namespace std;

void getMax(vector<int> &arr, int n, int idx, int max)
{
    if (n == idx)
    {
        cout << max;
        return;
    }

    if (arr[idx] > max)
        max = arr[idx];
    getMax(arr, n, idx + 1, max);
}

int getMaxi(vector<int> &arr, int n, int idx, int max){
  if (n == idx)
    {
        return max;
    }

    if (arr[idx] > max)
        max = arr[idx];
    return getMaxi(arr, n, idx + 1, max);
}
int main()
{
    vector<int> v = {
        3, 2, 4, 32, 4, 5};
    int n = v.size();
    getMax(v, n, 0, INT_MIN);
    cout<<endl;
    cout<<getMaxi(v, n, 0, INT_MIN);

}