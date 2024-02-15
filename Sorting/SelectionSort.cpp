#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int min = -1;

    for (int i = 0; i < n - 1; i++)
    {
        int mini = INT_MAX;
        for (int j = i; j < n; j++)
        {
            if (mini > arr[j])
            {
                min = j;
                mini = arr[j];
            }
        }
        swap(arr[i], arr[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}