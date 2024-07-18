#include <bits/stdc++.h>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val)
    {
        this->val = val;
    }
};
class solution
{
public:
   ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr= head;
        while(curr!=NULL){
            if(curr->next!=NULL && curr->next->val==curr->val){
                curr->next=curr->next->next;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
};

void display(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int main(){
     ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(10);
    ListNode *c = new ListNode(30);
    ListNode *d = new ListNode(40);
    ListNode *e = new ListNode(40);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    cout<<endl;

    solution ans;
    ListNode* answer=ans.deleteDuplicates(a);
    display(answer);

}