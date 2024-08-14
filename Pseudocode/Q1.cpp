
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a=3,b=5,c=4;
    c=(5^2)+a;
    for(int c=3;c<=5;c++){
        cout<<c<<endl;
        b=(a+9)&c;
        cout<<"b"<<b<<endl;
        a=3&a;
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
        b=(c^b)+c;
        cout<<"b"<<b<<endl;

        a=(5+8)&a;
        cout<<"a ,b,c"<<a<<b<<c<<endl;
    }
    cout<<a+b;
}