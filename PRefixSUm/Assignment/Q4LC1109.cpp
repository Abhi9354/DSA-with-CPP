#include <bits/stdc++.h>
using namespace std;
vector<int> corpFlightBookings(vector<vector<int>>& a, int n) {
       vector <int>sol(n,0);
       for(int i = 0 ; i<a.size() ; i++){
           sol[a[i][0]-1]+=a[i][2];
           if(a[i][1]<n)sol[a[i][1]]-=a[i][2];
       }

       for(int i = 1 ; i<n;i++){
           sol[i]=sol[i-1]+sol[i];
       }
       return sol;
    }
int main(){
    vector<vector<int>>booking;
    booking={{1,2,10},{2,3,20},{2,5,25}};
    int n =5;
    corpFlightBookings(booking,n);
}