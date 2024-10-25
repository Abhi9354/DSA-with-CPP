

#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for (int i = 0; i < s.size(); i++) {
            m1[s[i]]++;
            m2[t[i]]++;
        }
        for(auto i : m1){
            char key=i.first;
            if(m1[key]!=m2[key])return false;
                      
        }
        return true;
    }
int main(){
    string s,t;
    s = "anagram", t = "nagaram";
    cout<<isAnagram(s,t);
}