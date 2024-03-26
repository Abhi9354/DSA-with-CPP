#include <bits/stdc++.h>
using namespace std;

 void fillprime(vector<int>& sieve){
         int n = sieve.size()-1;
    for(int i =2 ; i*i<=n;i++)if(sieve[i]==1)for(int j = i*2 ; j<=n ; j+=i)sieve[j]=0;
     }
int main(){
    vector<int>nums;
    nums={2,4,3,7,10,6};

}