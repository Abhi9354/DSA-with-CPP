#include <bits/stdc++.h>
using namespace std;

 void fillprime(vector<int>& sieve){
         int n = sieve.size()-1;
    for(int i =2 ; i*i<=n;i++)if(sieve[i]==1)for(int j = i*2 ; j<=n ; j+=i)sieve[j]=0;
     }

     int distinctPrimeFactors(vector<int>& nums) {
        int maxi=-1;
        int count=0;
        int n= nums.size();
        for(int i= 0 ;i<n;i++) maxi=max(maxi,nums[i]);//finding max
        vector<int>prime(maxi+1,1);//creating max size array
        prime[0]=0;
        prime[1]=0;
        fillprime(prime)//fill prime which is lesser than max binary form
      vector<int>primeno; 
      for(int i = 2;i<prime.size();i++) if(prime[i]==1)primeno.push_back(i);//extracting only prime no like 2 ,3 ,5, 7
      vector<bool>freq(primeno.size(),0);//creating freq array which we figure primeno is divisble by num element or not
       for(int i =0 ;i<n;i++){
        for(int j =0;j<primeno.size();j++){
            if(nums[i]<primeno[j])break;
            if(nums[i]%primeno[j]==0)freq[j]=1;//filling existence of an prime no 
        }
       }
       for(int i = 0 ; i<freq.size();i++)if(freq[i]==1)count++;

       return count;

    }
int main(){
    vector<int>nums;
    nums={2,4,3,7,10,6};

}