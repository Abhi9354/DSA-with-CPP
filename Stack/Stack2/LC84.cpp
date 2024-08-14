
#include <bits/stdc++.h>
using namespace std;

  int largestRectangleArea(vector<int>& arr) {
     int n = arr.size();
    stack<int>ns;
    vector<int>nsi(n,6);
    ns.push(n-1);
    nsi[n-1]=n;
   for(int i = n-2;i>=0;i--){
    while(!ns.empty() && arr[i]<=arr[ns.top()])ns.pop();
    if(ns.size()==0)nsi[i]=n;
    else nsi[i]=ns.top();
    ns.push(i);
    
   }

    stack<int>ps;
    vector<int>psi(n,6);
    ps.push(0);
    psi[0]=-1;
   for(int i = 0;i<n;i++){
    while(!ps.empty() && arr[i]<=arr[ps.top()])ps.pop();
    if(ps.size()==0)psi[i]=-1;
    else psi[i]=ps.top();
    ps.push(i);
    
   }


   int maxi=0;
   for(int i = 0 ; i<n;i++){
    int height=arr[i];
    int breadth= nsi[i]-psi[i]-1;
    int area= height* breadth;
    maxi=max(maxi,area);

   }
   return maxi;
   
}
int main(){
    vector<int>hieghts;
    hieghts={2,1,5,6,2,3};
    int z=largestRectangleArea(hieghts);
    cout<<z;

}