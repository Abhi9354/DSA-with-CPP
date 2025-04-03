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
void displayTree(TreeNode *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displayTree(root->left);
    displayTree(root->right);
}
int main()
{
    int arr[] = {1, 2, 3, INT_MIN, 4, 5, 6, 7};
    queue<TreeNode *> q;
    int n =sizeof(arr)/sizeof(arr[0]);
    int i = 1;
    int j = 2;
    TreeNode *root = new TreeNode(arr[0]);
    q.push(root);
    while (q.size() > 0 && i<n)
    {
        TreeNode *temp = q.front();
        q.pop();
        TreeNode *l;
        if (arr[i] != INT_MIN)
            l = new TreeNode(arr[i]);
        else
            l = NULL;

        TreeNode *r;
        if (j!=n && arr[j] != INT_MIN)
            r = new TreeNode(arr[j]);
        else
            r = NULL;

        temp->left = l;
        temp->right = r;
        if(l!=NULL)q.push(l);
        if(r!=NULL)q.push(r);
        i+=2;
        j+=2;
    }
    displayTree(root);
}