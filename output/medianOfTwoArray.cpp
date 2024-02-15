#include <bits/stdc++.h>
using namespace std;
double findMedianSortedArray(vector<int>nums1,vector<int>nums2){
    
   double median=0;
       
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
               sort(nums1.begin(),nums1.end());
               for (int i : nums1){
                cout<<i<<",";
                
               }
               cout<<endl;
              
              
              if(nums1.size() % 2==0) return median=(nums1[nums1.size()/2.0]+nums1[(nums1.size()/2.0)-1])/2.0;
               else return median=nums1[nums1.size()/2.0];


}
int main(){
    vector<int>nums1;
    nums1.push_back(2);
    nums1.push_back(7);
    nums1.push_back(11);
    nums1.push_back(15);
    vector<int>nums2;
    nums2.push_back(6);
    nums2.push_back(8);
    nums2.push_back(4);
    nums2.push_back(5);
    
   cout<< findMedianSortedArray(nums1,nums2);

}
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int nums1[]={2,7,11,15};
//     int n1 = sizeof(nums1)/sizeof(nums1[0]);
//     int nums2[]={6,8,4,5};
//     int n2 = sizeof(nums2)/sizeof(nums2[0]);
//     int nums[n1+n2];
//     int n3= sizeof(nums)/sizeof(nums[0]);
   
//     for(int i=0; i<n1; i++)
//     {
//         nums[i]=nums1[i];
       
//         for(int j = n1; j<n3;j++){
//             nums[j]=nums2[i];
//             continue;
//         }
//     }

//     for (int i =0 ; i<n3;i++){
//         cout<<" "<<nums[i];
//     }
//     cout<<endl;
       
//     }