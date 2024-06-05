#include <bits/stdc++.h>
using namespace std;

class Node{
public:
  int val;
  Node* next;

Node(int val){
this->val=val;
this->next=NULL;
}

};
class LinkedList{
public:
Node* head;
Node* tail;
int size;

LinkedList(){
    head=NULL;
    tail=NULL;
    size=0;
}
void insertAtEnd(Node* head){
    Node* temp = new Node(90);
    while(head->next!=NULL)head=head->next;
    head->next=temp;
    
}
void display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
};
int main(){
    LinkedList ll;
   Node* a=new Node(10);
   Node* b= new Node (20);
       Node* c=new Node(10);
   Node* d= new Node (20);
    a->next=b;
    b->next=c;
    c->next=d;

    ll.insertAtEnd(a);
    ll.display(a);
        
}