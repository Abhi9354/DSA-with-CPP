#include <bits/stdc++.h>
using namespace std;
vector<int> findClosestElements(vector<int> &nums, int k, int x)
{
    int low = 0;
    int n = nums.size();
    int high = nums.size() - 1;
    int target = x;
    bool flag = false;
    int i;

    vector<int> sol(k);
    if (target <= nums[0])
    {
        for (int i = 0; i < k; i++)
        {
            sol[i] = nums[i];
        }
        return sol;
    }
    if (target >= nums[nums.size() - 1])
    {
        int i = n - 1;
        int j = k - 1;
        while (j >= 0)
        {
            sol[j] = nums[i];
            j--;
            i--;
        }
        return sol;
    }

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target == nums[mid])
        {
            sol[0] = nums[mid];
            flag = true;
            high = mid - 1;
            low = mid + 1;

            break;
        }
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    if (flag == true)
    {
        i = 1;
    }
    else
    {
        i = 0;
    }
    for (i; i < k; i++)
    {
        if (low > nums.size() - 1 && high>=0)
        {
            sol[i] = nums[high];
            high--;
        }
        else if (high < 0 && low <=n-1)
        {
            sol[i] = nums[low];
            low++;
        }

        else if (target - nums[high] > nums[low] - target && low <= nums.size() - 1 )
        {

            sol[i] = nums[low];
            low++;
        }
       else if (target - nums[high] <= nums[low] - target && high >= 0 )
        {

            sol[i] = nums[high];
            high--;
        }
    }
    sort(sol.begin(), sol.end());
    return sol;
   
}
int main()
{
    vector<int> v;
    v = {-2, -1, 1, 2, 3, 4, 5};
    int x = 3;
    int k = 7;
    findClosestElements(v, k, x);
}