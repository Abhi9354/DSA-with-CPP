 #include<bits/stdc++.h>
 using namespace std;
 int arrangeCoins(int n) {
        int low= 1;
        int high=n;
        while(low<=high){
            long long int mid = low + (high-low)/2;
            if(mid*(mid+1)/2<=n){
                low= mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return high;
    }
    int main (){
        int n =5;
       cout<< arrangeCoins(n);
    }