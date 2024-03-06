#include <bits/stdc++.h>
using namespace std;
void BinaryToDecimal(string& num){
     int n = num.size();
     int number= stoi(num);
     string result="";
     while(number>0){
       int lastDigit= number%2;
       cout<<"lastdigit"<<lastDigit<<endl;
       char ch = '0'+lastDigit;
       cout<<"ch"<<ch<<endl;

       result= ch+result;
       cout<<"result"<<result<<endl;

        number=number/2;
       cout<<"number"<<number<<endl;

     }
     cout<<result;
     
}
int main(){
    string num= "18";
    BinaryToDecimal(num);

}