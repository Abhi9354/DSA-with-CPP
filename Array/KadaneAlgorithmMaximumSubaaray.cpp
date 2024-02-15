#include <bits/stdc++.h>

using namespace std;

int maxSubArray(vector<int> &nums)
{
    int sum = 0;
    int max = INT_MIN;
    for (int i = 0; i < nums.size(); i++)
    {
        sum = sum + nums[i];

        if (max < sum)
        {
            max = sum;
        }
        if (sum < 0)
        {

            sum = 0;
        }
    }
    return max;
}
int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        nums.push_back(arr[i]);
    }

    cout << maxSubArray(nums);
}