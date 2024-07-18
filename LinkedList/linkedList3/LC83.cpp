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
   ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* slow = head;
        ListNode* temp = head;
        ListNode* fast = head;

        int size = 0;
        while (temp != NULL) {
            size++;
            temp = temp->next;
        }
        k = k % size;
        if (k == 0)
            return head;

        for (int i = 1; i <= k; i++) {
            fast = fast->next;
        }
        while (fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = head;
        head = slow->next;
        slow->next = NULL;
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
int main(){
     ListNode *a = new ListNode(1);
    ListNode *b = new ListNode(2);
    ListNode *c = new ListNode(3);
    ListNode *d = new ListNode(4);
    ListNode *e = new ListNode(5);
    ListNode *f= new ListNode(6);


    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next=f;
    cout<<endl;

    solution ans;
    ListNode* answer=ans.rotateRight(a,3);
    display(answer);

}