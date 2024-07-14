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
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* slow = head; // par hai last vala
        ListNode* fast = head;
        for (int i = 0; i < k; i++)
            fast = fast->next;
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        fast = head;
        for (int i = 0; i < k - 1; i++) {
            fast = fast->next;
        }
        swap(fast->val, slow->val);
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
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
  

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    
    solution ans;
    ans.swapNodes(a, 2);
    display(a);
}