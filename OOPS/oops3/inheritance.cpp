#include <bits/stdc++.h>
using namespace std;

class vehicle{//base class
    public:
    int tyresize;
    string companyname;
    vehicle(){
       cout<<"constructor call"<<endl;
    }
};
class Bike:public vehicle{//derived class  here public means jo bhi property apne parent class se lega vo child ke liye public mana jayega


//par jo parent class ke private properties hai vo inherit nhi hoga

//jo protected class ke properties hai vo inherit hojayenge but protected class ko public nhi bna sakte child class mai 

//jo public class ke properties hai vo inherit hojayenge but public class ko public bna sakte child class mai

//security   private>protected>public

//public become protected and protectd become private that's the hierarchy
    public:
    int handlesize;
    Bike(int tyresize,string companyname){
        this->tyresize=tyresize;
        this->companyname=companyname;
        cout<<this->tyresize<<endl;
        cout<<this->companyname<<endl;
    }
};
int main(){
    Bike tvs(10,"honda");
    // tvs.tyresize=10;
    // tvs.companyname="honda";
}