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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val)
            head = head->next;
        ListNode* curr = head;
        while (curr != NULL) {
            if (curr->next != NULL && curr->next->val == val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
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
int main()
{
    ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(6);
    ListNode *d = new ListNode(6);
    ListNode *e = new ListNode(4);
    ListNode *f = new ListNode(5);
    ListNode *g = new ListNode(6);

    a->next = b;
    b->next = c;
    c->next = d;

    d->next = e;
    e->next = f;
    f->next = g;

    solution ans;
    ListNode* answer=ans.removeElements(a,6);
    display(answer);
}