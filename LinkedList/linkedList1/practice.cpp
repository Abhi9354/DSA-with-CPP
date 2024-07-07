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

            temp->next = head;
            head = temp;
        }
        size++;
    }

    void insertAtMiddle(int idx, int val)
    {
        if (idx == 0)
        {
            insertAtStart(val);
        }
        else if (idx == size)
        {
            insertAtEnd(val);
        }
        else if (idx < 0 && idx > size)
        {
            cout << "cannnot inserted ";
        }
        else
        {
            Node *temp = new Node(val);
            Node *cur = head;
            int count = 0;

            while (1)
            {

                if (count == idx - 1)
                {
                    temp->next = cur->next;
                    cur->next = temp;
                    size++;
                    break;
                }
                cur = cur->next;
                count++;
            }
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
        {
            cout << "list is empty";
        }

        if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        if (size > 1)
        {
            head = head->next;
            size--;
        }
    }

    void deleteAtTail()
    {
        if (size == 0)
        {
            cout << "invalid size" << endl;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }

    void deleteAtIndex(int idx)
    {
        cout << "size is " << size << endl;
        if (idx < 0 || idx >= size)
        {
            cout << "invalid index";
        }
        else if (idx == 0)
        {
            deleteAtHead();
        }
        else if (idx == size - 1)
        {
            deleteAtTail();
        }
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next;
            }
            cout << "valuei s " << temp->val << endl;
            temp->next = temp->next->next;
            size--;
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
    cout << endl;
    display(ll.head);

    ll.insertAtEnd(119);
    cout << endl;
    display(ll.head);

    ll.insertAtEnd(30);
    cout << endl;
    display(ll.head);

    ll.insertAtEnd(69);
    cout << endl;
    display(ll.head);

    ll.insertAtStart(50);
    cout << endl;
    display(ll.head);

    ll.insertAtMiddle(1, 90);
    cout << endl;
    display(ll.head);

    ll.insertAtMiddle(2, 50);
    cout << endl;
    display(ll.head);

    ll.deleteAtHead();
    cout << endl;
    display(ll.head);

    ll.deleteAtHead();
    cout << endl;
    display(ll.head);

    ll.deleteAtTail();
    cout << endl;
    display(ll.head);

    cout << endl;
    cout << findsize(ll.head) << endl;

    ll.deleteAtIndex(1);
    cout << endl;
    display(ll.head);

    cout << findsize(ll.head) << endl;
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