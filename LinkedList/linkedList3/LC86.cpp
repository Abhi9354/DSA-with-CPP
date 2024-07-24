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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next )return head;
        ListNode* first=new ListNode(10);
        ListNode* second =new ListNode(20);    
        ListNode* fptr=first;
        ListNode* sptr=second;
        while(head!=NULL){
            if(head->val>=x){
                sptr->next=head;
                sptr=sptr->next;
                
            }
            else{
                fptr->next=head;
                fptr=fptr->next;
            }
            head=head->next;
        }        
        first=first->next;
        second=second->next;
        fptr->next=NULL;
        sptr->next=NULL;               
if(first==NULL)return second;
if(second==NULL)return first;
        fptr->next=second;
        sptr->next=NULL;
        return first;
         
        

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
    ListNode* answer= ans.partition(a,3);
    
    display(answer);
}