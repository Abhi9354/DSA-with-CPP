#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int v)
    {
        this->val = v;
        this->next = NULL;
    }
};

class LinkedList
{
public:
    Node *head;
    Node *tail;
    int size;

    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtStart(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            
            temp->next=head;
            head=temp;
            
        }
        size++;
    }
    
    void insertAtMiddle(int idx,int val){
      if(idx==0){
        insertAtStart(val);
      }
      else if (idx==size){
        insertAtEnd(val);
      }
      else if(idx<0 && idx>size){
         cout<<"cannnot inserted ";
        
      }
      else{
        Node* temp= new Node(val);
        Node* cur= head;
        int count= 0;

        while(1){
            
            if(count==idx-1){
              temp->next=cur->next;
              cur->next=temp;
              break;
            }
            cur=cur->next;
            count++;
        }
        
      }
    }
};

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}
int findsize(Node *a)
{
    int size = 0;
    Node *temp = a;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return size;
}

int main()
{
    LinkedList ll;
    ll.insertAtEnd(40);
    ll.insertAtEnd(30);
    ll.insertAtEnd(69);


    ll.insertAtStart(50);
    ll.insertAtMiddle(1,90);
    ll.insertAtMiddle(2,50);

    display(ll.head);
}

// int main()
// {
//     Node* a = new Node(10);
//     Node* b = new Node(20);
//     Node* c = new Node(30);
//     Node* d = new Node(40);
//     Node* e = new Node(40);

//      a->next= b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     cout<<findsize(a);
// }

// int main(){
//     Node* a = new Node(10);
//     Node* b = new Node(20);

//     Node* c = new Node(30);

//     Node* d = new Node(40);
//     a->next= b;
//     b->next=c;
//     c->next=d;
//     Node* temp= a;
//     while(temp!=NULL){
//          cout<<temp->val<<" ";
//          temp=temp->next;
//     }

// }

// int main(){
//     Node a(10) ;
//     Node b(20);
//     Node c(30);
//     Node d(40);

//     a.next=&b;
//     b.next=&c;
//     c.next=&d;

//     Node temp=a;

//     while(1){
//      cout<<temp.val<<endl;
//      if(temp.next==NULL)break;
//      temp = *(temp.next);
//     }

// }