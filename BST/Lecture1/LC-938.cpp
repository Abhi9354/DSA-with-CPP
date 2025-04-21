
class Solution {
    public:
        void helper(TreeNode* root, vector<int>& ans) {
            if (root == NULL)
                return;
            helper(root->left, ans);
            ans.push_back(root->val);
            helper(root->right, ans);
        }
        int rangeSumBST(TreeNode* root, int low, int high) {
            vector<int> ans;
            helper(root, ans);
            int sum=0;
            int idx=-1;
            for(int i = 0 ;i<ans.size();i++){
                 if(ans[i]==low){
                   idx=i;
                    break;
                 }
            }
            while(ans[idx]!=high)sum+=ans[idx++];
            sum= sum+high;
            return sum;
        }
    };