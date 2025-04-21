//insertion in bST
if (root==NULL){
    TreeNode* temp = new TreeNode(val);
    return temp;
}           
else if (val > root->val) root->right= insertIntoBST(root->right, val);
else if (val < root->val) root->left= insertIntoBST(root->left, val);
return root;