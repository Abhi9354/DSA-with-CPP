#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(string& n){
     int size = n.size();
     int sum = 0;
     for(int i = size-1; i>=0;i--){
        char ch= n[i];
        int num= ch-'0';
        sum = sum + num *(1<<size-i-1);

     }
     cout<<sum;
     
}
int main(){
    string n = "10010";
    BinaryToDecimal(n);

}