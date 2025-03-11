//Generate all binary strings without consecutive 1’s

#include <iostream>
using namespace std;
void binaryString(int n,string ans){
    if(n==1){
        cout<<ans<<endl;
        return;
    }
    binaryString(n-1,ans+'0');
    if(ans[ans.size()-1]!='1'){
    binaryString(n-1,ans+'1');
        
    }
}
int main(){
    int n =3;
binaryString(n,"");
}