//compile time polymorphism
#include <bits/stdc++.h>
using namespace std;
class ComplexNumber{
    public:

    int real;
    int imaginary;

    ComplexNumber add(ComplexNumber  &obj){
        ComplexNumber res;
        res.imaginary = this->imaginary + obj.imaginary;
        res.real = this->real + obj.real;
        return res;
    }

    ComplexNumber operator+(ComplexNumber  &obj){
        ComplexNumber res;
        res.imaginary = this->imaginary + obj.imaginary;
        res.real = this->real + obj.real;
        return res;
    }
    
    //below is the operator overloading
};
int main(){
    ComplexNumber a1 ,a2;
    a1.imaginary=10;
    a1.real=20;
    a2.imaginary=30;
    a2.real=40;
//it is a way
    ComplexNumber a4= a1.add(a2);
    cout<<a4.real<<endl;
    cout<<a4.imaginary<<endl;

    //operator overloading
    ComplexNumber a3= a1+a2;
    cout<<a3.real<<endl;
    cout<<a3.imaginary<<endl;
}