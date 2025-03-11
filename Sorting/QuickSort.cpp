#include <iostream>
#include <vector>
using namespace std;
int partition(vector<int>& nums,int si,int ei){
    int count=0;
    int idx= (si+ei)/2;
    int pivotEle=nums[idx];
   for(int i =si;i<=ei;i++){
    if(i==idx)continue;
    if(nums[i]<=pivotEle)count++;}
   int pi=count+si;
      swap(nums[pi],nums[idx]);
      int i =si;
      int j = ei;
      while(i<pi && j>pi){
        if(nums[i]<=pivotEle)i++;
        if(nums[j]>pivotEle)j--;
        else if(nums[j]<pivotEle && nums[i]>=pivotEle)swap(nums[i++],nums[j--]);
      }
      return pi;

}
void quickSort(vector<int> & nums,int si ,int ei){
   if(si>=ei)return;
   int pivot= partition(nums,si,ei);  
  quickSort(nums,si,pivot-1);
  quickSort(nums,pivot+1,ei);
}
int main(){
    vector<int>nums={5,2,1,4,7,8,6,-8};
    int n = nums.size();
    for(auto i : nums)cout<<i<<",";
    cout<<endl;
    quickSort(nums,0,n-1);
    for(auto i : nums)cout<<i<<",";
}