#include <bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map1;
        unordered_set<int>set1;
        for(int i =0 ; i<arr.size();i++){
            map1[arr[i]]++;
        }
        for(auto i: map1){

            if(set1.find(i.second)!=set1.end()){
                return false;

            }
            else{
                set1.insert(i.second);

            }
        }
return true;
        
    }
int main(){
     vector<int> arr;
    arr = {1,2,2,1,1,3};
    cout<<uniqueOccurrences(arr);
}