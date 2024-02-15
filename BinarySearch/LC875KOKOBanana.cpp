#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> nums, int mid ,int h )
{
    int m =0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {

        if (mid >= nums[i])
        {
            count++;
            continue;
        }
        if (mid < nums[i])
        {
            
                m=(nums[i]/mid)+1;
                count = count+m;
            
        }
    }
    if(count>h)return false;
    else return true;
}
int minEatingSpeed(vector<int> &nums, int h)
{
    int n = nums.size();
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {

        maxi = max(maxi, nums[i]);
    }
    int s = 1;
    int e = maxi;
    int minCount = 0;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (check(nums, mid,h))
        {
            minCount = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return minCount;
}
int main()
{
    vector<int> piles;
    piles = {3, 6, 7, 11};
    int h = 8;
   cout<<minEatingSpeed(piles, h);
}