#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    // vector<int> v ;
    // vector<int>a (5,1);
    
    // cout<<"vector a element"<<endl;
    // for(int i :a){
    //      cout<<i<<endl;
    // }
    // vector<int>copy(a);
    // cout<<"vector copy element"<<endl;
    // for(int i :copy){
    //      cout<<i<<endl;
    // }
    // cout<<"capacity check"<<endl;
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(2);
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // cout<<v.front()<<endl;
    // cout<<"the value at 1 "<<endl;
    // cout<< v.at(2)<<endl;
    // cout<<v.back()<<endl;
    //  cout<<"before pop back"<<endl;
    // for(int i : v){
    //     cout<<i<<" "<<endl;
    // }
    // v.pop_back();
    // cout<<"After pop back"<<endl;
    // for(int i : v){
    //     cout<<i<<" "<<endl;
    // }
    // cout<<"before clear"<<endl;
   
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;
    // cout<<"after clear"<<endl;
    // v.clear();
    // cout<<v.capacity()<<endl;
    // cout<<v.size()<<endl;






   

int arr[]={3,2,1,2};
vector<int> v(arr,arr+sizeof(arr)/sizeof(arr[0]));
 set<int>s;
    copy(v.begin(),v.end(),inserter(s,s.begin()));
    cout<<"The elements in the set are: ";
    for(auto it = s.begin();it!=s.end();++it){
        cout << *it << ' ';}
v.clear();
       
        copy(s.begin(),s.end(),back_inserter(v));
        cout<<"The elements after copying from set to vector are:";
        for(auto it=v.begin();it !=v.end(); ++it){
            cout<<*it<<' ';}






    return 0 ;
}