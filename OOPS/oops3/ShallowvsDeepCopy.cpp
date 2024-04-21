#include <bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int tyresize;
    Bike(){
        cout<<"constructor call"<<endl;
    }
Bike(Bike &b){
this->tyresize=b.tyresize;
}

~Bike(){
    cout<<"Destructor call"<<endl;
}

};
int main(){
    Bike tvs;
   tvs.tyresize=18;
   Bike RE(tvs);

tvs.tyresize=45;

    cout<<tvs.tyresize<<endl;
    cout<<RE.tyresize<<endl;
    }