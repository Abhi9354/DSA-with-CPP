
class Solution {
    public:
        bool isSameTree(TreeNode* p, TreeNode* q) {
            if (p == NULL && q == NULL)
                return true;
    
            else if ((p == NULL && q) || (p && q == NULL) || (p->val != q->val))
                return false;
    
            if (isSameTree(p->left, q->left) && isSameTree(p->right, q->right)) {
                return true;
            }
    
            return false;
        }
    };
    