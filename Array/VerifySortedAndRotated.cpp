#include <iostream>
#include <vector>
using namespace std;
bool verifySortedAndRotated(vector<int>nums,int n ){
int count = 1 ;
for(int i =1 ; i < n; i++){
    if(nums[i-1]>nums[i]){
        count++;
    }
}
if (nums[n-1]<1){
    count++;

}
if(count<=1){
    return true;
}
return false;
}
int main (){
   vector<int> nums;
   int a;
   int n ;
   cout<<"the value of n is -->"<<endl;
   cin>>n;
   for(int i = 0 ; i<n;i++){
    cout<<"the value of a from user is -->"<<endl;
    cin>>a;
    nums.push_back(a);
   }
for(auto i:nums){
  cout<<i<<" ";
}
cout<<endl;
if(verifySortedAndRotated(nums,n)){
    cout<<"array is sorted or rotated";
}
return 0;

}