#include<iostream>
#include<vector>
using namespace std;
// void sort(vector<int> &v)
// {
//     int start=0;
//     int end = v.size()-1;
//     while(start<end)
//     {
//           if(v[start]!=v[end] && v[start]==1 && v[end]==0)
//         {
//         swap(v[start],v[end]);
//         start++;
//         end--;
//         }
//         if(v[start]==0)
//         start++;
//         if(v[end]==1)
//         end--;
      
//     }
// }
// int main()
// {
//     vector<int> v;
//     v.push_back(0);
//      v.push_back(1);
//       v.push_back(1);
//        v.push_back(0);
//         v.push_back(0);
//          v.push_back(1);
//           v.push_back(1);
//            v.push_back(0);
//             v.push_back(0);
//             sort(v);
//             for (auto i : v){cout<<i<<" ";}
// }

// void sort(vector<int> &v)
// {
//     int start=0;
//     int end = v.size()-1;
//     while(start<end)
//     {
//           if(v[start]>v[end] && v[start]==2 && v[end]==0)
//         {
//         swap(v[start],v[end]);
//         start++;
//         end--;
//         }
//         if(v[start]>v[end] && v[start]==2 && v[end]==1){
//              swap(v[start],v[end]);
//              end--;
//         }
        
//         if(v[start]>v[end] && v[start]==1 && v[end]==0){
//            swap(v[start],v[end]);
//            start++;
//            end--;
//         }
        
//         if(v[start]==0){
//             start++;
//         }
//         if(v[end]==2){
//             end--;
//         }
      
//     }
// }
void sort(vector<int>& nums)
{
 int l = 0;
 int m = 0;
 int h= nums.size()-1;
 while(m<=h)
 { if(nums[m]==2)
    {
        int temp= nums[m];
        nums[m]=nums[h];
        nums[h]=temp;
        h--;
    }
     else if(nums[m]==0)
    {
         int temp= nums[m];
        nums[m]=nums[l];
        nums[l]=temp;
        l++;
        m++;
    }
    else
    {
        m++;
    }
 }
}
int main()
{
    vector<int> v;
    v.push_back(0);
     v.push_back(2);
      v.push_back(1);
       v.push_back(2);
        v.push_back(1);
         v.push_back(2);
          v.push_back(0);
           v.push_back(2);
            v.push_back(0);
            v.push_back(0);
            v.push_back(1);
            sort(v);
            for (auto i : v){cout<<i<<" ";}
}


