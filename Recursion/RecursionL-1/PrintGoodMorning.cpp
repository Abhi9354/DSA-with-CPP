#include <iostream>
using namespace std;
void goodMorning(int n){
    if(n==0){
        return;
        }
        cout<<"good Morning"<<endl;
    goodMorning(n-1);
}
int main(){
int n ;
cin>>n;
goodMorning(n);
}