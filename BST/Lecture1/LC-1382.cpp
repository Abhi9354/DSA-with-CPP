
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
        void helper(TreeNode* root, vector<int>& ans) {
            if (root == NULL)
                return;
            helper(root->left, ans);
            ans.push_back(root->val);
            helper(root->right, ans);
        }
        TreeNode* balanceBST(TreeNode* root) {
            vector<int> ans;
            helper(root, ans);
            return sortedArrayToBST(ans);
        }
    };