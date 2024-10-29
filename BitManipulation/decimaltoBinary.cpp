

#include <bits/stdc++.h>
using namespace std;
int main(){

   int n =18; 
   string s="";
   // while(n>0){
   //  int digit = n%2;
   //  s+=to_string(digit);
    
    
   //    n=n/2;
   // }
   // reverse(s.begin(),s.end());

   while(n>0){
      if(n%2==0){
       s='0'+s;
      }
      else{
       s='1'+s;
      }
      n=n/2;
   }
   cout<<s;

}