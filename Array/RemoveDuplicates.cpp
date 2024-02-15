#include<iostream>
#include<vector>
using namespace std;
void removeduplicates(vector<int> &v)
{
   int k = 0 ;
   for(int i = 0 ; i<v.size(); i++)
   {
    for(int j = i+1; j<v.size(); j++)
    {
        if(v[i]<v[j])
    }
   }
   
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(4);
    v.push_back(4);
    removeduplicates(v );
    for(int i=0 ; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}