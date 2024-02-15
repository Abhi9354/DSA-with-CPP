#include <iostream>
using namespace std;
int main (){
    string input;
    getline(cin , input);
    int n = input.length();
    int count =0;

    for ( int i = 1 ;i<n-1;i++){
        if(input[i]!=input[i+1] && input[i]!=input[i-1] ){
            count++;
        }
    }
cout<<count;
}