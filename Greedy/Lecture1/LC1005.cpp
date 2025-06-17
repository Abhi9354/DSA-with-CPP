//maximize sum of array after k negations
#include <iostream>

#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
class Solution {
        public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() && k > 0; ++i) {
            if (nums[i] < 0) {
                nums[i] = -nums[i];
                --k;
            }
        }
        if (k % 2 == 1) {
            auto minElement = min_element(nums.begin(), nums.end());
            *minElement = -(*minElement);
        }
        return accumulate(nums.begin(), nums.end(), 0);
    }
};