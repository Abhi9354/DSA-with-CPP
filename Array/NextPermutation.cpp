#include<iostream>
#include<vector>
using namespace std;
 void NextPermutation(vector<int> &v)
{
  int change = 0;
  int i = v.size()-2;
  int j = v.size()-1;
  while(i>0)
  {
    if(v[j]>v[i])
    {
        change++;
        break;
    }
    else{
        i--;
        j--;
        change++;
    }
  }
  if(change==1)
  {
    swap(v[i], v[j]);
  }
  if(change==2)
  {
    swap(v[i], v[j]);
    j++;
    swap(v[i], v[j]);
  }
  if(change==v.size())
  {
 
    j=v.size();
    swap(v[i], v[j]);
  }
}

int main()
{
   vector <int> v;
   v.push_back(3);
   v.push_back(2);
   v.push_back(1);
   NextPermutation ( v);
   for(int i = 0 ; i<v.size(); i++)
   {
    cout<<v[i]<<",";
   }
}