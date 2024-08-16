#include <bits/stdc++.h>
using namespace std;
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>st;
        int count=0;
        for(int i =0;i<words.size();i++){
            string s=words[i];
            reverse(s.begin(),s.end());
            if(st.find(s)!=st.end() && words[i]!=s)count++;
            else st.insert(words[i]);
        }
        return count;
        
    }
int main(){
    vector<string>words;
    words={"cd","ac","dc","ca","zz"};
    cout<<maximumNumberOfStringPairs(words);    
}