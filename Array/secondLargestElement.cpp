#include <bits/stdc++.h>
#include <vector>
#include<algorithm>


vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(),a.end());
    vector<int>ans;
   for(int i = n-1 ; i<=0 ;i--){
       if(a[i]!=a[i-1]){
           ans.push_back(a[i-1]);
           break;
       }
   }
   for(int i = 0 ; i<n ;i++){
       if(a[i]!=a[i+1]){
           ans.push_back(a[i+1]);
           break;
       }
   }
  
    return ans;
    
}
int main(){
    vector<int>a;
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    a.push_back(2);
    int n = a.size();
    getSecondOrderElements(n,a);
    return 0 ;

}