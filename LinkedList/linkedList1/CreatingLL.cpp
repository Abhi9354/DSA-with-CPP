#include <bits/stdc++.h>
using namespace std;

class Node{
  private:
  ~Node(){
   cout<<"called";
}

public:
  int val;
  Node* next;

Node(int val){
this->val=val;
this->next=NULL;
}

};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;
    cout<<a.next->next->val<<endl;
    cout<<a.next->next->next->val<<endl;

    Node temp= a;

     cout<<"using loop"<<endl;
    //using loop 
    while(1){
        cout<<temp.val<<endl;

        if(temp.next==NULL)break;

        temp=*(temp.next);
        
        
        }
        
}



// #include <iostream>
// using namespace std;
 
// class Test {
// private:
//     ~Test() {}
// };
// int main() { Test* t = new Test; }