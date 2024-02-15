#include<bits/stdc++.h>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
     int count= 0;
     if(digits[digits.size()-1]<9){
        digits[digits.size()-1]++;
        return digits;
     } 
     else{
        for(int i=digits.size()-1;i>=0;i--){
            if(digits[i]==9) count++; 
            if(digits[i]!=9)break;
        }
        for(int i = 1; i<=count ;i++)digits.pop_back();
        if(digits.size()==0){
            for(int i = 0;i<=count;i++){
                if(i==0){digits.push_back(1);}
                else digits.push_back(0);
            }
        }
        else{
        digits[digits.size()-1]++;
        for(int i = 1;i<=count;i++)digits.push_back(0);
        }
     }
     return digits;
      
    }
int main(){
    vector<int>digits;
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(9);
    digits.push_back(9);
    plusOne(digits);
}