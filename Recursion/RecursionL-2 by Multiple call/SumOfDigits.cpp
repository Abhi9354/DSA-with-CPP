//Program for Sum of the digits of a given number



#include <bits/stdc++.h>
using namespace std;
int findSum(int n ){
    if(n<=0)return 0;
    return n%10+findSum(n/10);
}
int main(){
   cout<<findSum(169);    
}