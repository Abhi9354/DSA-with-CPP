#include <iostream>
#include <string>
#include <algorithm>
#include<sstream>
#include<vector>

using namespace std;
int main()
{
    string name = "abhishek is an math math teacher teacher . he is a tutor as well";
    stringstream ss(name);
    string temp;
    vector<string>v;
    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    int maxcount= 1;
    int count= 1;
    for(int i = 1 ; i<v.size();i++){
           if(v[i]==v[i-1]){
            count++;
           }
           else {
            count = 1;
           }
           maxcount= max(maxcount,count);
    }
    for(int i = 1 ; i<v.size();i++){
           if(v[i]==v[i-1]){
            count++;
           }
           else {
            count = 1;
           }
           if(count == maxcount){
            cout<<v[i]<<"="<<maxcount<<endl;
           }
    }
    

}