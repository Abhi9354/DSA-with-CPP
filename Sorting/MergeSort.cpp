#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int>arr1,vector<int>arr2,vector<int> & nums){
    int i=0,j=0,k=0;
    while(j<arr2.size() && i<arr1.size()){
         if(arr1[i]<=arr2[j])nums[k++]=arr1[i++];
         else nums[k++]=arr2[j++];
    }
    if(i==arr1.size())while(j<arr2.size())nums[k++]=arr2[j++];
    else while(i<arr1.size())nums[k++]=arr1[i++];

}
void mergeSort(vector<int> & nums){
   if(nums.size()==1)return;      
   int n1=nums.size()/2;
   int n2=nums.size()-n1;
   vector<int>arr1(n1);
   vector<int>arr2(n2);
   for(int i = 0 ; i<n1;i++)arr1[i]=nums[i];
   for(int i = 0 ; i<n2;i++)arr2[i]=nums[i+n1];
   mergeSort(arr1);
   mergeSort(arr2);
   merge(arr1,arr2,nums);
   arr1.clear();
   arr2.clear();
}
int main(){
    vector<int>nums={5,2,1,4,7,8,6};
    for(auto i : nums)cout<<i<<",";
    cout<<endl;
    mergeSort(nums);
    for(auto i : nums)cout<<i<<",";
}