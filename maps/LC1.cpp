

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> map1;
    vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        int diff = target - nums[i];
        if (map1.find(diff) != map1.end())
        {
            ans.push_back(i);
            ans.push_back(map1[diff]);
        }
        else
        {
            map1[nums[i]] = i;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr;
    arr = {2, 7, 11, 15};
    int target = 9;
    vector<int> sol = twoSum(arr, target);
    for (auto i : sol)
    {
        cout << i << endl;
    }
}