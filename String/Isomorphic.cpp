#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
bool isIsomorphic(string s, string t) {
       if(s.length()!=t.length()){
           return false;
       } 
        vector<int> v(150,1000);
        for(int i = 0 ; i<s.length();i++){
            int index = (int)s[i];
            if(v[index]==1000){
               v[index]= s[i]-t[i];
            }
            else if(v[index]!=(s[i]-t[i])){
                return false;
            }
        }
        for(int i = 0 ; i<v.size();i++){
            v[i]=1000;
        }

         for(int i = 0 ; i<t.length();i++){
            int index = (int)t[i];
            if(v[index]==1000){
               v[index]= t[i]-s[i];
            }
            else if(v[index]!=(t[i]-s[i])){
                return false;
            }
        }

        return true;
    }
int main(){
   string s = "egg";
   string t = "add";
   cout<<isIsomorphic(s,t);
    
}