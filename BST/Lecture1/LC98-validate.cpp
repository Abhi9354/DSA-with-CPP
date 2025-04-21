
class Solution {
    public:
        bool helper(TreeNode* root) {
             stack<TreeNode*>st;
             vector<int>v;
             TreeNode* node = root;
              while(st.size()>0 || node != NULL){
                if(node){
                    st.push(node);
                    node=node->left;
                    
                }
                else{
                    TreeNode* temp = st.top();
                    v.push_back(temp->val);
                    st.pop();
                    node=temp->right;
                }
             }
             for(auto i :v)cout<<i<<",";
             for(int i =0 ; i<v.size()-1;i++)   if(v[i]>=v[i+1])return false;
            return true;
        }
        bool isValidBST(TreeNode* root) { return helper(root); }
    };