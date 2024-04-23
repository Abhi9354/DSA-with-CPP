
#include <bits/stdc++.h>
using namespace std;
//Abstract class means it has a pure virtual function
class Base{//pure virtual function means it is the guided class jisme hum ek summary dete hai ki mere child mai ye function hone hi chahiye iska object nhi bn skta or ye ensure krta hai ki iske function ko override kiya hi jaye 
    public:
        virtual void fun()=0;//defining declaration only
        virtual void run()=0;
};

class Derived:public Base{
    public:
        void fun(){
            cout<<"Derived fun"<<endl;
        }
        void run(){
            cout<<"Derived run"<<endl;
        }
};
int main(){
    Derived d;
    d.fun();
    d.run();
}
//pure abstract class means sare pure virtual function honge
