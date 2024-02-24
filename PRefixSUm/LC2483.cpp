#include <bits/stdc++.h>
using namespace std;
 int bestClosingTime(string customers) {
        
        int n = customers.length();
        vector<int>SuffixY(n);
        vector<int>PrefixN(n);
        vector<int>Penalty(n+1);
        int count=0;
        if(customers[n-1]=='Y')SuffixY[n-1]=1;
        if(customers[n-1]!='Y')SuffixY[n-1]=0;

         PrefixN[0]=0;



        //for Yes Suffix to calculate how many yes afterward the ith hours including ith
        for(int i=n-2;i>=0;i--){
         if(customers[i]=='Y')SuffixY[i]=1+SuffixY[i+1];
         else  SuffixY[i]=SuffixY[i+1]+0;           
        }

        cout<<"SuffixY Arary : ";
        for(auto i :SuffixY){
            cout<<i<<",";
        }
        cout<<endl;
        //For No Prefix excluding ith term
        for(int i=1;i<n;i++){
          if(customers[i-1]=='N')PrefixN[i]=PrefixN[i-1]+1;
          else PrefixN[i]=PrefixN[i-1]+0;
        }


         cout<<"PreffixN Arary : ";
        for(auto i :PrefixN){
            cout<<i<<",";
        }
        cout<<endl;
        //for adding last close of the shop
        for(int i =0;i<n;i++){
            if(customers[i]=='N')count++;
        }
        //Generating Penalty array
        for(int i=0 ;i<n;i++){
          Penalty[i]=SuffixY[i]+PrefixN[i];
        }
        cout<<"Count is "<<count;
        cout<<endl;
        Penalty[n]=count;


         cout<<"Penalty Arary : ";
        for(auto i :Penalty){
            cout<<i<<",";
        }
        cout<<endl;
        //For finding minimun of all the array
        int mini=INT_MAX;
        int idx=-1;
         for(int i=0;i<Penalty.size();i++)
         {
          if(Penalty[i]<mini){
              mini=Penalty[i];
              idx=i;
          }
        }
        return idx;
    }
int main(){
    string customers="YYNY";

   cout<<bestClosingTime(customers);
}