
class Solution {
  public:
  
  int findSize(Node* tree){
      if(tree==NULL)return 0 ;
      return 1+ findSize(tree->left)+findSize(tree->right);
  }
  
  bool isCBT(Node* tree){
      queue<Node*>q;
      q.push(tree);
      int count=0;
      int size= findSize(tree);
      while(size>count){
          Node* temp=q.front();
          count++;
          q.pop();
          if(temp!=NULL){
              q.push(temp->left);
          q.push(temp->right);
          }
      }
      while(q.size()>0){
          Node* temp = q.front();
          q.pop();
          if(temp!= NULL)return false ;
      }
      return true;
      
  }
  
  bool maxHeap(Node* tree){
      if(tree==NULL)return true;
      if(tree->left!= NULL && tree->data < tree->left->data) return false;
       if(tree->right!= NULL && tree->data < tree->right->data) return false;
       return maxHeap(tree->left ) && maxHeap(tree->right);
      
  }
    bool isHeap(Node* tree) {
        if(maxHeap(tree) && isCBT(tree))return true;
        return false;
        
    }
};