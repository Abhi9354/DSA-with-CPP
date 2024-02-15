#include <iostream>
using namespace std;
int main(){
    int p = 890;
    cout << "The value of variable 'p' is: "<< p << endl;
    cout << "address of variable 'p' is: "<< &p << endl;
    int &q=p;
    cout<<"q address "<<&q<<endl;
    cout<<"q value "<<q<<endl;
    p=590;
    cout<<"q value "<<q<<endl;
}