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
    ListNode *c = new ListNode(5);
    ListNode *d = new ListNode(2);
    ListNode *e = new ListNode(3);
    ListNode *f = new ListNode(4);
    ListNode *g = new ListNode(6);
    ListNode *h = new ListNode(7);
    ListNode *i = new ListNode(8); 

    a->next = b;
    b->next = c;  
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = i;  
    cout << endl;
    solution ans;
    ListNode* answer= ans.mergeTwoLists(a,d);
    
    display(answer);
}