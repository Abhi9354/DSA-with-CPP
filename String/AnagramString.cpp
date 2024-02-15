#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    if(s==t){
        cout<<"it is an anagram";
    }
    else{
        cout<<"it is not anagram";
        
    }


}