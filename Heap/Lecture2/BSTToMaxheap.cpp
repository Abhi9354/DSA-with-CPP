#include <algorithm>
#include <vector>

class Solution {
  public:
   
   void inorder(Node* root , vector<int>& in){
       if(root== NULL)return;
       inorder(root->left,in);
       in.push_back(root->data);
       inorder(root->right,in);
   }
   
    void preorder(Node* root , vector<int>& in , int& i ){
       if(root== NULL)return;
       root->data=in[i++];
       preorder(root->right,in,i);
       preorder(root->left,in,i);
     
   }
   
    void convertToMaxHeapUtil(Node* root) {
        vector<int>in;
        inorder(root ,in);
        reverse(in.begin(),in.end());
        int i=0;
        preorder(root,in,i);
        
    }
};
