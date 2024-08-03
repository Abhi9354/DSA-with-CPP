#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int idx;
    Stack()
    {
        head = NULL;
        idx = 0;
    }
    void push(int val)
    {
        Node *temp = new Node(val);
        temp->next = head;
        head = temp;
        idx++;
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty cannot pop"<<endl;
            return;
        }
        head=head->next;
    }
    int top(){
        if(idx==-1){
 cout<<"stack is empty cannot pop"<<endl;
            return -1;
        }
        return head->val;
    }
    void display(){
        Node* temp= head;
        while(temp){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
    }
};

int main()
{
    Stack st;
    st.push(10);
    st.push(20);

    st.push(30);

    st.push(40);
    st.push(50);
    st.display();
    cout<<endl;
    st.pop();
    st.display();



}