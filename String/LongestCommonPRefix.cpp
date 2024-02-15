#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string longestCommonPrefix(vector<string>& strs) {

    int n = strs.size();
    if(n==1){
        return strs[0];
    }
    sort(strs.begin(),strs.end());

    for(auto i:strs){
        cout<<i<<endl;
    }
    string first = strs[0];
    string end= strs[n-1];
    string ans="";
    for(int i = 0 ; i<(min(first.size(),end.size()));i++){
        if(first[i]==end[i]) ans = ans + first[i];
        else return ans;
    }
    return ans;


}
int main()
{
    vector<string>strs;
    strs.push_back("flower");
    strs.push_back("flow");
    strs.push_back("flight");
    strs.push_back("dog");
    strs.push_back("racecar");
    strs.push_back("car");
   cout<<longestCommonPrefix(strs);
}
