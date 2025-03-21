
class Solution {
    public:
        int findMaxi(TreeNode* root) {
            if (root == NULL)
                return 0;
            int maxi = 1 + max(findMaxi(root->left), findMaxi(root->right));
            return maxi;
        }
        bool isBalanced(TreeNode* root) {
            if (root == NULL)
                return true;
            int left = findMaxi(root->left);
            int right = findMaxi(root->right);
    
            if (abs(left - right) > 1)
                return false;
            bool leftAns = isBalanced(root->right);
            if (!leftAns)
                return false;
    
            bool rightAns = isBalanced(root->left);
            if (!rightAns)
                return false;
            return true;
        }
    };