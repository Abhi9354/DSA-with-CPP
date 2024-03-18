#include <bits/stdc++.h>
using namespace std;
void printFactor(int n ){
    for(int i = 1 ; i<=sqrt(n);i++){
        if(n%i==0){
        cout<<i<<" ";

        cout<<n/i<<" ";

        }
    }
}
int main(){
    int n = 50;
    printFactor(n);
}