//given an interger n ,find the maxi power of two tha is smaller than n



#include <bits/stdc++.h>
using namespace std;
int main(){
int n =24;
int ans=0;
while(n!=0){
    ans=n;
    n=n&(n-1);
}    
// cout<<ans;

int m= 24;
m=m|m>>1;
m=m|m>>2;
m=m|m>>4;
m=m|m>>8;
m=m|m>>16;
cout<<((m+1));
// cout<<m;




}


