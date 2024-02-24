#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (a[mid] == key)
            return mid;
        else if (a[mid] < key)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return e;
}

vector<int> answerQueries(vector<int> nums, vector<int> queries)
{
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int m = queries.size();
    vector<int> prefix(n);
    vector<int> answer(m);
    prefix[0] = nums[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + nums[i];
    }
    for (int i = 0; i < m; i++)
    {
        answer[i] = binarySearch(prefix, queries[i]) + 1;
    }
    return answer;
}
int main()
{

    vector<int> nums;
    nums = {2, 3, 4, 5};
    vector<int> queries;
    queries = {1};
    vector<int> ans;
    ans = answerQueries(nums, queries);
    for (auto i : ans)
    {
        cout << i << ",";
    }
}