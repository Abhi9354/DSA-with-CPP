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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // int size=0;
        // ListNode* a = head;
        // while(a!=NULL){
        //     size++;
        //     a=a->next;
        // }
        // if(size==n){
        //     head=head->next;
        //     return head;
        // }
        // cout<<size;
        // int m = size-n+1;
        // cout<<m;
        // int idx= m-1;
        // cout<<idx;

        // ListNode* temp = head;
        //     for (int i = 1; i <= idx-1; i++)
        //     {
        //         temp = temp->next;
        //     }
        //     temp->next = temp->next->next;
        //     return head;
        ListNode* slow= head;
        ListNode* fast= head;

        for(int i=0;i<n+1;i++){
            if(fast==NULL){
            head=head->next;
            return head;
        }
           fast= fast->next;
        }

        while(fast!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        
        slow->next=slow->next->next;
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
     ListNode *a = new ListNode(10);
    ListNode *b = new ListNode(20);
    ListNode *c = new ListNode(30);
    ListNode *d = new ListNode(40);
    ListNode *e = new ListNode(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    display(a);
    cout<<endl;

    solution ans;
    ListNode* answer=ans.removeNthFromEnd(a,2);
    display(answer);

}