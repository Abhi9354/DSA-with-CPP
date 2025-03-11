
#include <iostream>
#include <string>
using namespace std;
bool palindrome(string original ,string ans,int idx,int n){
    if(idx==n){
       cout<<original<<"=>"<<ans<<endl;
        
    }
    return palindrome(original , ans+original[idx],idx+1,n);
}
int main(){
    string s= "malayalam";
    int n=s.size();
    cout<<palindrome(s,"",0,n);
}