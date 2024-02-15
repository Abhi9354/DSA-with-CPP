#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<string>v;
    v.push_back("0123");
    v.push_back("0023");
    v.push_back("5123");
    v.push_back("673");
    v.push_back("006433");



    int max= stoi(v[0]);
    string maxS;
    for(int i = 1; i<v.size();i++){
        int x= stoi(v[i]);
        if(x>max){
            max=x;
            maxS=v[i];
        }
    }
    cout<<max<<endl<<maxS;

}