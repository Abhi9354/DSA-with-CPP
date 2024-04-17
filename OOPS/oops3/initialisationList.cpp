#include <bits/stdc++.h>
using namespace std;

class Bike {
   public:
    int tyresize;
    int Engine;
    Bike(int tyresize,int Engine):tyresize(tyresize),Engine(Engine){}//for short hand
        
    
};
int main(){
   
    Bike tvs(10,100);
    cout<<tvs.tyresize<<endl;
    cout<<tvs.Engine<<endl;
}   