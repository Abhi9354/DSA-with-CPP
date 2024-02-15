#include <iostream>
using namespace std;
int main(){
    string name = "abhishek";
//    name[1]='c';
//    cout<<name;
  for(int i = 0 ;name[i]!='\0';i++){
    if(i%2==0) name[i]='a';
  }
  cout<<name;
}