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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp = new ListNode(70);
        ListNode* c = temp;
        while (list1 && list2) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
        }
        if (!list1)
            temp->next = list2;
        else
            temp->next = list1;

        return c->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)return head;
        ListNode* temp1=head;
        ListNode* slow=head;
        ListNode* fast= head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode* temp2=slow->next;
        slow->next=NULL;
        temp1=sortList(temp1);
        temp2=sortList(temp2);
        ListNode* answer= mergeTwoLists(temp1,temp2);
        return answer;


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
    ListNode *b = new ListNode(4);
    ListNode *c = new ListNode(5);
    ListNode *d = new ListNode(1);
    ListNode *e = new ListNode(3);
    ListNode *f = new ListNode(4);
    ListNode *g = new ListNode(2);
    ListNode *h = new ListNode(6);

    a->next = b;
    b->next = c; 
    c->next=d; 

    d->next = e;
    e->next = f;
    f->next=g;

    g->next=h;

   
    // cout << endl;
    solution ans;
    ListNode* answer= ans.sortList(a);
    
    display(answer);
}