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
    ListNode *middleNode(ListNode *head)
    {
        int size = 0;
        ListNode *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
            size++;
        }
        if (size % 2 == 0)
        {
            for (int i = 1; i <= (size / 2); i++)
                head = head->next;
            return head;
        }
        else
        {
            for (int i = 1; i <= size / 2; i++)
                head = head->next;

            return head;
        }

       //better approach

    //    ListNode* slow= head;
    //     ListNode* fast= head;
    //     while(fast!=NULL && fast->next!=NULL){
    //         slow=slow->next;
    //         fast=fast->next->next;
    //     }
    //     return slow; 

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
    ListNode *b = new ListNode(20);
    ListNode *c = new ListNode(30);
    ListNode *d = new ListNode(40);
    ListNode *e = new ListNode(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    solution ans;
    ListNode* sol=ans.middleNode(a);
    cout<<sol->val;
}