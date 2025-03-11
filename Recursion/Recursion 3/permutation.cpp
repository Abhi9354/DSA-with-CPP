

#include <iostream>
using namespace std;
void permutation(string s,string t){
    if(s==""){
        cout<<t<<" "<<endl;
    }
 for(int i =0 ; i<s.size();i++){
    char a = s[i];
    string left= s.substr(0,i);
    string right=s.substr(i+1);
    permutation(left+right,t+a);
 }

}
int main(){
 string s="abc";
 permutation(s,"");   
}