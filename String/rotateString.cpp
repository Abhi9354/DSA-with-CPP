#include <bits/stdc++.h>
using namespace std;
bool rotateString(string s ,string goal){
    string v= s;
        if (s.length()!=goal.length()){
            return false;
        }
        for(int k = 1 ; k<=s.length();k++){
       reverse(s.begin()+k,s.end());
       reverse(s.begin(),s.begin()+k);
       reverse(s.begin(),s.end());
       if(s==goal){
        return true;
       }
       s=v;
       }
       return false;

}
int main (){
    string s = "abcde";
    string goal= "cdeab";
    rotateString(s,goal);
}