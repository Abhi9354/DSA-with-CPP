

#include <iostream>
#include <vector>
using namespace std;

void func(vector<int> &nums, vector<int> ans, vector<vector<int>> &finalans, int idx)
{
    if (nums.size() == idx)
    {
        finalans.push_back(ans);
        return;
    }

    func(nums, ans, finalans, idx + 1);
    if (nums[idx] == ans[ans.size() - 1])
    {
        ans.push_back(nums[idx]);
        func(nums, ans, finalans, idx + 1);
    }
}

void subsets(vector<int> &nums, vector<int> ans, int idx)
{
    if (nums.size() == idx)
    {
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout<<endl;
        return;
    }

    subsets(nums, ans, idx + 1);
    if (ans.size() == 0 || ans[ans.size() - 1] == nums[idx-1])
    {
        ans.push_back(nums[idx]);
        subsets(nums, ans, idx + 1);
    }
   
}
int main()
{
    vector<int> nums = {1, 2, 3};
    vector<int> ans;
    subsets(nums, ans, 0);
}