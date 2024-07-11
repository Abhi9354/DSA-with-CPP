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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *temp1 = headA;
        ListNode *temp2 = headB;
        int lenA = 0;
        int lenB = 0;
        while (temp1 != NULL)
        {
            lenA++;
            temp1 = temp1->next;
        }
        while (temp2 != NULL)
        {
            lenB++;
            temp2 = temp2->next;
        }

        temp1 = headA;
        temp2 = headB;
        if (lenA > lenB)
        {
            for (int i = 1; i <= lenA - lenB; i++)
            {
                temp1 = temp1->next;
            }
            while (temp1 != temp2)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
        else
        {
            for (int i = 1; i <= lenB - lenA; i++)
            {
                temp2 = temp2->next;
            }
            while (temp1 != temp2)
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            return temp1;
        }
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
    ListNode *e = new ListNode(5);
    ListNode *f = new ListNode(6);

    ListNode *b1 = new ListNode(2);
    ListNode *c1 = new ListNode(3);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    b1->next = c1;
    c1->next = d;
    solution ans;
    ListNode *sol = ans.getIntersectionNode(a, b1);
    cout << sol->val;
}