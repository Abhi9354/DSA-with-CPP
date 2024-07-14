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
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *temp = list1;
        ListNode *temp1 = list1;

        for (int i = 0; i < b + 1; i++)
        {
            temp1 = temp1->next; // 5
        }
        for (int i = 0; i < a - 1; i++)
        {
            temp = temp->next; // 13
        }

        temp->next = list2;
        ListNode *temp3 = list1;
        while (temp3->next != NULL)
        {
            temp3 = temp3->next;
        }
        temp3->next = temp1;
        return list1;
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
    ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(1);
    ListNode *c = new ListNode(13);
    ListNode *d = new ListNode(6);
    ListNode *e = new ListNode(9);
    ListNode *f = new ListNode(5);

    ListNode *g = new ListNode(99);
    ListNode *h = new ListNode(100);
    ListNode *i = new ListNode(101);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    g->next = h;
    h->next = i;
    solution ans;
    ans.mergeInBetween(a, 3, 4, g);
    display(a);
}