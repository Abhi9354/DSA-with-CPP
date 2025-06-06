
class Solution {
    public:
        TreeNode* helper(vector<int>& nums, int s, int e) {
            if (s > e)
                return NULL;
            int mid = s + (e - s) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = helper(nums, s, mid - 1);
            root->right = helper(nums, mid + 1, e);
            return root;
        }
        TreeNode* sortedArrayToBST(vector<int>& nums) {
            int s = 0;
            int e = nums.size() - 1;
            return helper(nums, s, e);
        }
    };