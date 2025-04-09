// contruct binary tree from Inorder and postorder
TreeNode *helper(vector<int> &postorder, vector<int> &inorder, int postS,
                 int postE, int inS, int inE)
{

    cout << postS << "," << postE << "--" << inS << "," << inE << endl;
    if (postS > postE)
        return NULL;
    TreeNode *root = new TreeNode(postorder[postE]);
    if (postS == postE)
        return root;
    int idx = inS;
    int n = postorder.size();
    while (idx <= inE)
    {
        if (inorder[idx] == postorder[postE])
            break;
        idx++;
    }
    int left = idx - inS;
    int right = postE - idx - 1;
    root->left = helper(postorder, inorder, postS, postS + left - 1, inS, idx - 1);
    root->right = helper(postorder, inorder, postS + left, postE - 1, idx + 1, inE);
    return root;
}
TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int n = postorder.size();
    return helper(postorder, inorder, 0, n - 1, 0, n - 1);
}