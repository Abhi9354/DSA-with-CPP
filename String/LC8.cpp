#include <bits/stdc++.h>
using namespace std;
int myAtoi(string s) {
    ///base Case

    if(s.empty())return 0;
    long i=0;
    long sign = 1;
    long ans=0;

    //spaces remove
    while(i<s.length() && s[i]==' ')++i;


    //positive or negative handle
    if(s[i]=='-' || s[i]=='+'){
        s[i++]=='-'?sign=-1:sign=1;
    }


    while(i<s.length()){
        if(s[i]>=48 && s[i]<=57){
            ans=ans*10+(s[i++]-'0');
        }
        else  return ans*sign;
      ///handle overflow
        if(ans>INT_MAX)return sign==-1?INT_MIN:INT_MAX;
    }
    return  ans * sign;
}

int main()
{

    vector<string> v;
    v = {"42", "     -42", "6195 with days","-324askdjf","454546546545465467879878"};
    for (int i = 0; i < v.size(); i++)
    {
        cout << myAtoi(v[i])<<endl;
    }
}