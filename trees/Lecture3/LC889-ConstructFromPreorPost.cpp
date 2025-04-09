TreeNode* dfs(vector<int>& preorder, int prestart, int preend,
    vector<int>& postorder, int poststart, int postend) {

if (prestart > preend || poststart > postend)
return NULL;
TreeNode* root = new TreeNode(preorder[prestart]);
if (prestart == preend)
return root;

int idx = poststart;
while (postorder[idx] != preorder[prestart + 1]) {
idx++;
}
int len = idx - poststart + 1;
root->left = dfs(preorder, prestart + 1, prestart + len, postorder,
           poststart, idx);
root->right = dfs(preorder, prestart + len + 1, preend, postorder,
            idx + 1, postend);
return root;
}
TreeNode* constructFromPrePost(vector<int>& preorder,
                     vector<int>& postorder) {
return dfs(preorder, 0, preorder.size() - 1, postorder, 0,
     postorder.size() - 1);
}