#include <bits/stdc++.h>
using namespace std;
int maxSatisfaction(vector<int> nums)
{
    sort(nums.begin(), nums.end());
    int coe = 1;
    int sum = 0;
    int n = nums.size();
    bool flag = false;
    vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] < 0)
        {
            flag = true;
        }
    }
    if (flag == true)
    {
        vector<int> suffix(n);
        suffix[n - 1] = nums[n - 1];
        int idx = -1;
        for (int i = n - 2; i >= 0; i--)
        {
            suffix[i] = suffix[i + 1] + nums[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (suffix[i] >= 0)
            {
                sum = sum + nums[i] * coe;
                coe++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            sum = sum + coe * nums[i];
            coe++;
        }
    }
    return sum;
}
int main()
{

    vector<int> satisfaction;
    satisfaction = {4, 3, 2};
    cout << maxSatisfaction(satisfaction);
}