
class Solution {
    public:
        int findLevel(TreeNode* root) {
            if (root == NULL)
                return 0;
            int maxi = 1 + max(findLevel(root->left), findLevel(root->right));
            return maxi;
        }
        void helper(TreeNode* root, int& maxDia) {
            if (root == NULL)
                return;
            int left = findLevel(root->left);
            int right = findLevel(root->right);
            maxDia = max(maxDia, left + right);
            helper(root->left, maxDia);
            helper(root->right, maxDia);
        }
        int diameterOfBinaryTree(TreeNode* root) {
            int maxDia = 0;
            helper(root, maxDia);
            return maxDia;
        }
    };