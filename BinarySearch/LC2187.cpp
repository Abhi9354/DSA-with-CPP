#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> nums, long long mid, int h)
{
    long long count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        count +=mid / nums[i];
    }
    if (count < h)
        return false;
    else
        return true;
}
long long minimumTime(vector<int> &nums, int totalTrip)
{
    int n = nums.size();
    int maxi = -1;
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi,nums[i]);
    }

    long long s = 1;

    long long e = (long long)maxi * (long long)totalTrip;
   long long minHrs = -1;
    while (s <= e)
    {
        long long mid = s + (e - s) / 2;
        if (check(nums, mid, totalTrip))
        {
            minHrs = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return minHrs;
}

int main()
{
    vector<int> time;
    time = {1, 2, 3};
    int totalTrip = 5;
    cout << minimumTime(time, totalTrip);
}