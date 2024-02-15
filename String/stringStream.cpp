#include <iostream>
#include <string>
#include <algorithm>
#include<sstream>
using namespace std;
int main()
{
    string s = "abhishek is an math teacher";
    // stringstream ss(name);
    // string temp;
    // while(ss>>temp){
    //     cout<<temp<<endl;
    // }
        stringstream ss(s);
        string temp;
        string temp1;
        while(ss>>temp){
            temp1=temp+" "+temp1;

        }
    

        temp1.pop_back();
        cout << temp1 << endl;
        
}