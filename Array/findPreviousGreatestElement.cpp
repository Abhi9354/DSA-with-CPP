#include <iostream>
#include <vector>
using namespace std;
void greatest_Previous_Element(vector<int> &height, vector<int> &sol){
     sol[0]=-1;
        int max= height[0];
        cout<<max;

    for (int i = 1; i < height.size(); i++)
    {
        // int s = 0;
        // int e = i - 1;
        
        sol[i]=max;
        if (height[i]>max){
           max= height[i];
        }}
}



int main (){
     int arr[] = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> nums;
    vector<int> prev(12);
       int n = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++)
    {
        nums.push_back(arr[i]);
    }
   

     greatest_Previous_Element(nums, prev );
     for(int i : prev){
        cout<<i<<" ";
     }
}