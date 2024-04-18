#include <bits/stdc++.h>
using namespace std;

class A{
private://this cannot be inherited and cannot be accessed outside the class
int a_ka_private;
protected://this cannot be accessed but only inherited
int a_ka_protected;//it can do both
public:
int a_ka_public;
};

class B : public A{//jab b class ne A class ke properties inherit ki toh uske pass sirf protected or public hi aaya or unko humne B class ke liye public rakha lekin public rkhne se protected ko access nahi kar payenge according to hierarchy IT SHOULD BE PROTECTED
    public:
    void print(){
        cout<<a_ka_public<<endl;
    }
};


int main(){
    B b;
    b.a_ka_public=10;
    b.print();
    
}