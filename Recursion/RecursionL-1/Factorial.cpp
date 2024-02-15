#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return n;
    }
   n=n*factorial(n-1);
   return n;
}
int main(){
int n ;
cin>>n;
cout<<factorial(n);
}