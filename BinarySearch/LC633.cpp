#include <bits/stdc++.h>
using namespace std;
bool isPerfect(int n){
int root = sqrt(n);
if(root*root==n)return true;
else return false;
}
    bool judgeSquareSum(int c) {
        
        int s = 0 ;
        int e= c;
        while(s<=e){
            
            if(isPerfect(s) && isPerfect(e))return true;
            else if(!isPerfect(e)){
                 e = (int)sqrt(e)*(int)sqrt(e);
                 s = c-e;
            }
            else{
               s= ((int)sqrt(s)+1)*((int)sqrt(s)+1);
               e= c-s;
            }
        }
        return false;
    }
int main (){
    int c;
    cin>>c;
    cout<<judgeSquareSum(c);
}