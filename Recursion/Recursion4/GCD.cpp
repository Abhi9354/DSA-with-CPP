

#include <iostream>
using namespace std;
int gcd(int divident,int divisor){
      if(divident%divisor==0){
        return divisor;
      }
   //24,12
     return gcd(divisor,divident%divisor);
}
int main(){
    cout<<gcd(60,24);
}