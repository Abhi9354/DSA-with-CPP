
class Solution {
    public:
        void helper(TreeNode* root, vector<string>& sol, string s) {
            if (!root->left && !root->right) {
                string a = to_string(root->val);
                s = s + a;
                sol.push_back(s);
                return;
            }
            string a = to_string(root->val);
            a = a + "->";
            if (root->left) helper(root->left, sol, s + a);
            if (root->right)  helper(root->right, sol, s + a);
            
        }
        vector<string> binaryTreePaths(TreeNode* root) {
            vector<string> given;
            string s = "";
             helper(root, given, s);
            return given;
        }
    };