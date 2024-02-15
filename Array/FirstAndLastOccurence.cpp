#include<iostream>
#include<vector>
using namespace std;
// void find(vector<int> &v , int target, int temp[])
// {
//     int i , j , k ;
//     i = 0; j = v.size()-1; k = 0;
//     while(i<v.size())
//     {
//         if(target==v[i])
//         {
//             temp[k++]=i;
//             break;
//         }
//         i++;
//     }
//     while(j>0)
//     {
//         if(target==v[j])
//         {
//             temp[k++]=j;
//             break;
//         }
//         j--;
//     }
//     for(int i = 0 ; i<=1; i++)
//     {
//         cout<<temp[i]<<",";
//     }
// }
vector<int> searchRange(vector<int>& nums, int target) {
    int i , j , k ;
    i = 0; j = nums.size()-1; k = 0;
    while(i<nums.size())
    {
        if(target==nums[i])
        {
            break;
        }
        i++;
    }
    while(j>0)
    {
        if(target==nums[j])
        {
            break;
        }
        j--;
    }
    if(target==nums[i] && target==nums[j])
    {
        return {i , j};
    }
    else 
    return {-1 , -1};
}
int main()
{
  vector<int> nums;
 nums.push_back(2);
 nums.push_back(3);
 nums.push_back(3);
 nums.push_back(3);
 nums.push_back(3);
 nums.push_back(3);
 nums.push_back(4);
 nums.push_back(5);
  int target ;
  cin>>target;
  searchRange(nums , target);
}





//  if(target==nums[i] && target==nums[j])
//     {
//         for(int i = 0 ; i<=1 ; i++)
//         {
//             cout<<temp[i]<<",";
//         }
//     }
//     else
//     {
//         for(int i = 0 ; i<=1 ; i++)
//         {
//             for(int i = 0 ; i<=1; i++)
//             {
//                 cout<<temp[i]<<",";
//             }
//         }
//     }