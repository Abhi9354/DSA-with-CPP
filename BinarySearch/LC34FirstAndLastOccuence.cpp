#include <bits/stdc++.h>
using namespace std;
int firstOccrence(vector<int> nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target == nums[mid])
        {
            if (nums[mid - 1] == target)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int LastOccrence(vector<int> nums, int target)
{
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (target == nums[mid])
        {
            if (nums[mid + 1] == target)
            {
                low = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        else if (target > nums[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> nums;
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    int target = 4;
    cout <<"first occurence of 2 index is "<< firstOccrence(nums, target) << endl;
    cout <<"first occurence of 2 index is "<< LastOccrence(nums, target) << endl;
    cout<<"no of target present in the vector is "<<LastOccrence(nums, target)-firstOccrence(nums, target)+1;

}