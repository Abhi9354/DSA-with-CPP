
class Solution {
    public:
        TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
            if(root==NULL)return NULL;
            if(root->val == p->val || root->val == q->val )return root;
            else if(root->val > p->val  && root->val <q->val){
                cout<<"M"<<endl;
                return root;
            }
            else if (root->val < p->val  && root->val > q->val){
                cout<<"N"<<endl;
                return root;
            }
            //present in left
            else if(q->val < root-> val && p->val < root->val){
                cout<<"o"<<endl;
                return lowestCommonAncestor(root->left,p,q);
            }
            //Present in right
            else if(q->val > root-> val && p->val > root->val){
                return lowestCommonAncestor(root->right,p,q);
                cout<<"p"<<endl;
                }
            return root;
        }
    };