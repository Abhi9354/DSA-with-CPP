#include<bits/stdc++.h>
using namespace std;
vector<int> superiorElements(vector<int>&a) {
    vector<int>b;
    b.push_back(a[a.size()-1]);
    for(int i =a.size()-2; i>=0;i--){
         if(a[i]>b[b.size()-1]){
             b.push_back(a[i]);
         }
    }
    return b;
}
int main(){
    vector<int>nums;
    nums={1,2,3,2};
    superiorElements(nums);
}