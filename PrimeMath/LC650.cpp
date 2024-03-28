#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n ){
    int i=2;
    while(i<n){
        if(n%i==0)return false;
    }
    return true;
}

int HF(int n){
    for(int i =2 ;i<=sqrt(n);i++){
        if(n%i==0)return n/i;
        
    }
    return 1;
}

    int minSteps(int n) {
         int count = 0;

          while(n>1){
            if(isPrime(n)){
                count+=n;
                break;
            }
            int hf=HF(n);//20,10,5
           count = count + n/hf;//2,2
           n=hf;
          }
          return count;

    }
int main(){
   cout<< minSteps(20);
}