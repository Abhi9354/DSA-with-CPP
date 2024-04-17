#include <bits/stdc++.h>
using namespace std;



class vehicle{
    public:
    int tyresize;
    string companyname;
    vehicle(){
       cout<<"constructor call"<<endl;
    }
};
class Bike:public vehicle{
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