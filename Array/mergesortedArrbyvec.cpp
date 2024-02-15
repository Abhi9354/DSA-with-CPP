#include <bits/stdc++.h>
#include <vector>
using namespace std;


void merge(vector<int>&nums1,int m,vector<int>&nums2,int n ){
/*vector<int> nums;
int i =0;
int j= 0 ;
while(1){

  if(i==m){
        while (j<n){
            nums.push_back(nums2[j]);
            j++;
        }
        break;
    }
    else if(j==n){
        while (i<m){
            nums.push_back(nums1[i]);
            i++;
        }
        break;
    }
       else{ 
        if (nums1[i]<nums2[j]){
        nums.push_back(nums1[i]);
        i++;
    }
   else if (nums1[i]>=nums2[j]){
        nums.push_back(nums2[j]);
        j++;

    }}
}


for(int k =0 ;k<m+n;k++){
   nums1[k]=nums[k];
}
for(int  k : nums1){
    cout<<k<<" ";
}

}*/


for(int i=0 ; i<n;i++){
    nums1[m+i]=nums2[i];

}
sort(nums1.begin(),nums1.end());
for(int i =0 ;i<m+n;i++){
    cout<<nums1[i];
}
}

int main (){
    vector<int>nums1;
    nums1.push_back(1);
    nums1.push_back(2);
    nums1.push_back(3);
    nums1.push_back(0);
    nums1.push_back(0);
    nums1.push_back(0);
    
    vector<int>nums2;
    nums2.push_back(2);
    nums2.push_back(5);
    nums2.push_back(6);

    int m=3;
    int n = 3;
    merge(nums1,m,nums2,n);
return 0;
}