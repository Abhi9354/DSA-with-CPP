

#include <bits/stdc++.h>
using namespace std;
int main(){

   int n =35;//100011
  int k =3;
  n=n>>k-1;
  if(n&1==1)cout<<"setBit";
  else cout<<"not set bit";



}
