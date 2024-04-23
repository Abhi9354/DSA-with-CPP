
#include <bits/stdc++.h>
using namespace std;

class base{
int a_ka_private;
public:
    friend void fun(base &b);

    
};

class ComplexNumber{
    public:

    int real;
    int imaginary;

    friend ComplexNumber operator + (ComplexNumber  &obj1,ComplexNumber  &obj2);

    
    
    //below is the operator overloading
};

ComplexNumber operator +(ComplexNumber  &obj1,ComplexNumber  &obj2){
        ComplexNumber res;
        res.imaginary = obj1.imaginary + obj2.imaginary;
        res.real = obj2.real + obj2.real;
        return res;
    }

void fun(base &b){
    cout<<b.a_ka_private<<endl;
}
int main(){
    base b;
    fun(b);//using friend function we can access the private member of the class

    //using friend fucntion we can achieve operator overloading
    
    ComplexNumber a1 ,a2;
    a1.imaginary=10;
    a1.real=20;
    a2.imaginary=30;
    a2.real=40;
    ComplexNumber a3=a1+a2;
    cout<<a3.real<<endl;
    cout<<a3.imaginary<<endl;
}