#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
int val;
ListNode* next;
ListNode(int val){
this->val=val;
}
};

class solution{
public:
    void deleteNode(ListNode* c){
          c->val=c->next->val;
          c->next=c->next->next;
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
    ListNode* a= new ListNode(10);
    ListNode* b= new ListNode(20);
    ListNode* c= new ListNode(30);
    ListNode* d= new ListNode(40);
    ListNode* e= new ListNode(50);


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    solution ans;
    ans.deleteNode(c);
    display(a);





}