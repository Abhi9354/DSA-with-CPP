
#include <iostream>
#include <math.h>
#include <queue>
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

void BFS(TreeNode* root){
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()>0){
        TreeNode* temp= q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);

    }
    cout<<endl;
}
int main()
{
    TreeNode *a = new TreeNode(1);
    TreeNode *b = new TreeNode(2);
    TreeNode *c = new TreeNode(3);
    TreeNode *d = new TreeNode(15);
    TreeNode *e = new TreeNode(5);
    TreeNode *f = new TreeNode(6);
    TreeNode *g = new TreeNode(7);
    TreeNode *fz = new TreeNode(7);
    TreeNode *par = new TreeNode(7);


    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    f->left=fz;
    fz->right=par;
    BFS(a);

    // cout<<findLevel(a);
}