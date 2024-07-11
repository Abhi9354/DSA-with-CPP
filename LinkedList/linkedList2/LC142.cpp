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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        bool flag = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                flag = true;
                break;
            };
        }
        if (flag == false)
        {
            return NULL;
        }

        else
        {
            ListNode *temp = head;
            while (slow != temp)
            {
                slow = slow->next;
                temp = temp->next;
            }
            return slow;
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

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b;

    solution ans;
    ListNode* final= ans.detectCycle(a);
    cout<<final->val;
}