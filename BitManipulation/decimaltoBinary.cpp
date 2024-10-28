

#include <bits/stdc++.h>
using namespace std;
int main(){

   int n =35;
   string s="";
   while(n>0){
    int digit = n%2;
    s+=to_string(digit);
    
    
      n=n/2;
   }
   reverse(s.begin(),s.end());
   cout<<s;

}