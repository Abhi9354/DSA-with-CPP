#include <iostream>
#include <math.h>
#include <queue>
#include <vector>
#include <climits>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
int findLevel(TreeNode *root)
{
    if (root == NULL)
        return 0;
    int maxi = 1 + max(findLevel(root->left), findLevel(root->right));
    return maxi;
}
void Maxi(TreeNode *root, int count, int level)
{
    if (count == level)
    {
        cout << root->val << " ";
        return;
    }
    Maxi(root->left, count + 1, level);
    Maxi(root->right, count + 1, level);

    // if(root==NULL)return 0;
    // int lMax=Maxi(root->left);
    // int rMax=Maxi(root->right);
    // return max(root->val,max(lMax,rMax));
}

void displayTree(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}
void leftBounday(TreeNode *root)
{
    if(root==NULL)return;
    if(!root->left && !root->right)return;
    cout<<root->val<<" ";
    leftBounday(root->left);
    if(root->left==NULL)leftBounday(root->right);
}
void leafNode(TreeNode* root){
    if(root==NULL)return;
    if(!root->left && !root->right)cout<<root->val;
    leafNode(root->left);
    leafNode(root->right);
}
void rightBoundary(TreeNode* root){
    if(root==NULL)return;
    if(!root->left && !root->right)return;
    rightBoundary(root->right);
    if(root->left==NULL)rightBoundary(root->left);
    cout<<root->val<<" ";

}
void boundayTraversal(TreeNode *root)
{
    leftBounday(root);
    leafNode(root);
    rightBoundary(root->right);

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7,8 };
    queue<TreeNode *> q;
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 1;
    int j = 2;
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);
    while (q.size() > 0 && i < n)
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *l;
        if (arr[i] != 0)
            l = new TreeNode(arr[i]);
        else
            l = NULL;

        TreeNode *r;
        if (j != n && arr[j] != 0)
            r = new TreeNode(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;
        if (l != NULL)
            q.push(l);
        if (r != NULL)
            q.push(r);
        i += 2;
        j += 2;
    }
    // displayTree(root);
    int levels = findLevel(root);
    // cout<<levels;
    // for (int i = 0; i < levels; i++)
    // {
    //     Maxi(root, 0, i);
    //     cout << endl;
    // }

    boundayTraversal(root);
}