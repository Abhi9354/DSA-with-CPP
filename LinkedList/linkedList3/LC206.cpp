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
     ListNode* reverseList(ListNode* head) { ListNode *prev=NULL,*curr=head,*Next=head; while(curr){Next=curr->next;curr->next=prev;prev=curr;curr=Next;}return prev;}
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
int main()
{
    
    
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
   
    a->next = b;
    b->next = c; 
    c->next=d; 

    d->next = e;
   

   
    // cout << endl;
    solution ans;
    ListNode* answer= ans.reverseList(a);
    
    display(answer);
}