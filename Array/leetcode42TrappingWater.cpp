#include <iostream>
#include <vector>
using namespace std;
void greatest_Previous_Element(vector<int> &nums, vector<int> &sol,int n)
{
        sol[0]=-1;
        int max= nums[0];

    for (int i = 1; i < n; i++)
    {
        
        sol[i]=max;
        if (nums[i]>=max){
           max= nums[i];
        }}
}
       
    

void greatest_next_Element(vector<int> &nums, vector<int> &next,int n )
{
      next[n-1]=-1;
        int max= nums[n-1];

    for (int i = n-2; i >=0 ; i--)
    {
        
        next[i]=max;
        if (nums[i]>=max){
           max= nums[i];
        }}
}
    
void next_prev_comparison(vector<int> &comparison, vector<int> &prev, vector<int> &next, int n)
{
    for (int i = 1; i < n - 1; i++)
    {
       comparison[i]=min(prev[i],next[i]);
    }
}
 int last_compare(vector<int> &comp, vector<int> nums)
{
    int count = 0;

    for (int i = 1; i < comp.size()-1; i++)
    {

        if (comp[i] >= nums[i])
        {
            count = count + comp[i] - nums[i];
        }
    }
    return count;
}


    int trap(vector<int>& height) {
        int n = height.size();
         vector<int> previous(n);
    vector<int> next(n);
    vector<int> comparison(n);
     greatest_Previous_Element(height, previous,n);
     for(auto i : previous){
        cout<<i<<" ";
     }
     cout<<endl;
      greatest_next_Element(height, next,n);
      for(auto i : next){
        cout<<i<<" ";
     }
     cout<<endl;

       next_prev_comparison(comparison, previous, next, n);

       for(auto i : comparison){
        cout<<i<<" ";
     }
     cout<<endl;
        return last_compare(comparison, height);
        
    }



int main()
{

    int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> nums;
   

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        nums.push_back(arr[i]);
    }

   cout<< trap(nums);
   


    return 0;
}