#include <bits/stdc++.h>
using namespace std;
int main(){
int  x = 7;
int count = 0;
for(int i = 2 ; i<x;i++) {
    if(x%i==0)count++;
}   
if (count>0)cout<<"not prime number";
else cout<<"it is a prime number";
}