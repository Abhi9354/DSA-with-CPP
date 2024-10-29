//Reverse Bit


#include <bits/stdc++.h>
using namespace std;

 uint32_t reverseBits(uint32_t n) {
        uint32_t ans= 0;
        for(int i = 0 ; i<32;i++){
            ans= ans<<1;
            ans = ans | (n&1);
            n=n>>1;

        } 
        return ans ;
    }
int main(){
    uint32_t n= 00000010100101000001111010011100;
    cout<<reverseBits(n);
}