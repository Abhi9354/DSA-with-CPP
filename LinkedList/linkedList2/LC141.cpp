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
   bool hasCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(fast==slow)return true;
        }
        return false;


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
int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
  

    a->next = b;
    b->next = c;
    c->next = d;
   d->next=b;

   solution ans;
   cout<<ans.hasCycle(a);
}