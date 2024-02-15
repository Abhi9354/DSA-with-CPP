#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void AddElement(vector<int>a,int n ,vector<int>b ,int m,vector<int>c,int r){
    int ans= 0 ;
    int temp = 0;
    for(int i = 0 ;i<n ;i++){
        ans = ans *10 + a.at(i);
    }
    cout<<ans<<endl;
    for(int i = 0 ; i<m ; i++){
        temp = temp *10 + b.at(i);
    }
    cout<<temp<<endl;
     int sol= ans+temp;
    
    while(sol!=0){
       
    cout<<"the value of sol is "<<sol<<endl;
    int  mainsol = sol%10;
        c.push_back(mainsol);
        sol= sol/10;
        cout<<sol<<endl;
    }
   
    reverse(c.begin(),c.end());
   
    for(auto i : c){
        cout<<i<<" ,";
    }
}
int main(){
    vector<int>a;
    vector<int>b;
  
      int n ;
      cout<<"Enter the value of n is -->"<<endl;
   cin>>n;
      
      int m;
       cout<<"Enter the value of m is -->"<<endl;
   cin>>m;
      int r= n+m;
    vector<int >c;
 
   int p;
   
 
   int q;
   
  
   
  
   for(int i = 0 ; i<n;i++){
    cout<<"the value of p from user at "<<i<<endl;
    cin>>p;
    a.push_back(p);
   }
   for(int i=0 ; i<m;i++){
    cout<<"the value of q from user at "<<i<<endl;
    cin>>q;
    b.push_back(q);
   }
   AddElement(a,n,b,m,c,r);
}