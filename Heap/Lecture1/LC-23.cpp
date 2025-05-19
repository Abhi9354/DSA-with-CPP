
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     priority_queue<int,vector<int>,greater<int>>pq; 

     for(int i =0 ;i<lists.size();i++){
        ListNode* a = lists[i];

        while(a!=NULL){
            pq.push(a->val);
            a=a->next;
        }
     }   
    ListNode* temp= new ListNode(0);
    ListNode* ans= temp;


     while(pq.size()>0){
        int a = pq.top();
        ListNode* p = new ListNode(a);
        temp->next= p;
        temp =temp->next;
        pq.pop();
     }
    return ans->next;
    }
};