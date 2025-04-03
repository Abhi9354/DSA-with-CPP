#include <iostream>
#include <math.h>
using namespace std;
class TreeNode{
public:
int val;
TreeNode* left;
TreeNode* right;

TreeNode(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;

}
};
void displayTree(TreeNode* root){
    if(root==NULL)return;
    cout<<root->val<<" ";
    displayTree(root->left);
    displayTree(root->right);

}
int sum(TreeNode* root){
    if(root==NULL)return 0;
    return root->val+ sum(root->left) + sum(root->right);
}
int findSize(TreeNode* root){
    if(root==NULL)return 0;
    return 1 + findSize(root->left) + findSize(root->right);
}
void Maxi(TreeNode* root,int count){
    if(count==3){
        cout<<root->val<<endl;
        return;
    }
    Maxi(root->left,count+1);
    Maxi(root->right,count+1);

    // if(root==NULL)return 0;
    // int lMax=Maxi(root->left);
    // int rMax=Maxi(root->right);
    // return max(root->val,max(lMax,rMax));
}
int main(){
    TreeNode* a= new TreeNode(1);
    TreeNode* b= new TreeNode(7);
    TreeNode* c= new TreeNode(8);
    TreeNode* d= new TreeNode(2);
    TreeNode* e= new TreeNode(6);
    TreeNode* f= new TreeNode(9);
    TreeNode* g= new TreeNode(5);
    TreeNode* h= new TreeNode(11);
    TreeNode* i= new TreeNode(5);

    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
   e->left=g;
   e->right=h;
   f->left=i;

    // displayTree(a);
    cout<<endl;
    // cout<<sum(a);
    // cout<<endl;
    // cout<<findSize(a);
    // cout<<endl;
    Maxi(a,1);



}