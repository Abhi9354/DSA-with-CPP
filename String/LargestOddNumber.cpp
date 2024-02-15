
#include<bits/stdc++.h>
using namespace std;
string largestOddNumber( string num)
{
    
  for(int i = num.length()-1 ; i>=0; i--)
  {
     char b= num[i];
    int a = (int)(b)-48;
    if(a%2==1){
        return num;
    }
    else num.pop_back();
  }
}
int main()
{
    string num = "7542351161";
 cout<< largestOddNumber( num);
}