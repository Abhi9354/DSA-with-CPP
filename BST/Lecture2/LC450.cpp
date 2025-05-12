
class Solution {
    public:
        TreeNode* findPredecessor(TreeNode* root){
            TreeNode* temp = root->left;
            while(temp->right)temp=temp->right;
            return temp;
        }
        TreeNode* deleteNode(TreeNode* root, int key) {
            if(root==NULL)return NULL;
            if(root->val==key){
                if(!root->left && !root->right)return NULL;
                if(!root->left || !root->right){
                    if(root->left)return root->left;
                    else return root->right;
                    
                }
                if(root->left && root->right){
                   TreeNode* pred=findPredecessor(root);
                   root->val=pred->val;
                  root->left=deleteNode(root->left,pred->val);
                }
            }
            else if (root->val > key)root->left= deleteNode(root->left,key);
            else if (root->val < key)root->right= deleteNode(root->right,key);
            return root;
        }
    };