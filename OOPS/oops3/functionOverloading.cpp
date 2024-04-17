#include <bits/stdc++.h>
using namespace std;

class Bike {
   public:
    int tyresize;
    int Engine;

    //constructor overloading
    Bike(int tyresize,int Engine):tyresize(tyresize),Engine(Engine){}
    Bike(int tyresize):tyresize(tyresize){}
    Bike(){this->Engine=100;}
        
    
};
//function overloading
void Area(int l){
cout<<l*l<<endl;
}
void Area(int l,int b){
    cout<<l*b<<endl;
    
}
int main(){
   Area(10);
   Area(10,20);
    Bike tvs(10,100);
    Bike re(12);
    Bike honda;
    cout<<tvs.tyresize<<endl;
    cout<<tvs.Engine<<endl;
    cout<<re.tyresize
    <<endl;
    cout<<honda.tyresize
    <<endl;
    return 0;
}   