#include <bits/stdc++.h>
using namespace std;
class Bike{
    public:
    int tyresize;
Bike(int tyresize){
this->tyresize=tyresize;}

~Bike(){
    cout<<"Destructor call"<<endl;
}

};
int main(){
    Bike tvs(13);
    Bike RE(15);
    cout<<tvs.tyresize<<endl;
    cout<<RE.tyresize<<endl;
    //jaise hi object apne sccope se bhr jayenge desctructor call hota hai
    }