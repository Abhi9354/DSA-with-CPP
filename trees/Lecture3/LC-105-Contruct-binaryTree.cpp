
class Solution {
    public:
        TreeNode* helper(vector<int>& preorder, vector<int>& inorder, int preS,
                         int preE, int inS, int inE) {
            if (preS > preE)return NULL;      
            TreeNode* root = new TreeNode(preorder[preS]);
            if (preS == preE)
                return root;
            int idx = inS;
            int n = preorder.size();
            while (idx <= inE) {
                if (inorder[idx] == preorder[preS]) break;
                idx++;
            }
            int left = idx - inS;
            int right = inE - idx;
            root->left = helper(preorder, inorder, preS + 1, preS + left, inS, idx - 1);  
            root->right =helper(preorder, inorder, preS + left + 1, preE, idx + 1, inE);
            return root;
        }
        TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
            int n = preorder.size();
            return helper(preorder, inorder, 0, n - 1, 0, n - 1);
        }
    };