#include <bits/stdc++.h>
using namespace std;

class A{
private://this cannot be inherited and cannot be accessed outside the class
int a_ka_private;
protected://this cannot be accessed but only inherited
int a_ka_protected;//it can do both
public:
int a_ka_public;


 A(){
    cout<<"A ka constructor call"<<endl;
 }
};

class B : public A{//jab b class ne A class ke properties inherit ki toh uske pass sirf protected or public hi aaya or unko humne B class ke liye public rakha lekin public rkhne se protected ko access nahi kar payenge according to hierarchy IT SHOULD BE PROTECTED
    public:  //a_ka_protected is protected now,a_ka_public is public now
    void print(){
        cout<<a_ka_public<<endl;
        a_ka_protected=10;//but this can modify beacuse it is protected
    }

     B(){
    cout<<"b ka constructor call"<<endl;
 }
};

class C:protected B{//a_ka_protected is protected now,a_ka_public is protected now
public:
int c_ka_public;
 
 C(){
    cout<<"c ka constructor call"<<endl;
 }
void show(){
a_ka_protected=10;
a_ka_public=10;
}
};


int main(){
   C c;
   //constructor call pehle hmesha parent ka hota hai then child ka 
   
   
    
}