#include <bits/stdc++.h>
using namespace std;
vector<long long> findPrefixScore(vector<int> &nums)
{
    int n = nums.size();
    vector<long long> sol(n);
    sol[0] = nums[0] + nums[0];
    int max = nums[0];

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            sol[i] = nums[i] + max;
        }
        sol[i] = nums[i] + max;
    }
    for (auto i : sol)
    {
        cout << i << ",";
    }
    cout<<endl;
    for(int i = 1 ; i<n ; i++){
        sol[i]=sol[i-1]+sol[i];
    }
     for (auto i : sol)
    {
        cout << i << ",";
    }
    return sol;
}
int main()
{
    vector<int> nums;
    nums = {2, 3, 7, 5, 10};
    findPrefixScore(nums);
}