class Solution {
public:
    typedef pair<int,pair<int,int>> pip;
    vector<int> smallestRange(vector<vector<int>>& nums) {
        priority_queue<pip,vector<pip>,greater<pip>>minheap;
        int maxi=INT_MIN;  
       for(int i= 0 ;i<nums.size();i++){
           maxi=max(maxi,nums[i][0]);
           minheap.push({nums[i][0],{i,0}});
       }
        int minimum=minheap.top().first;
        int start=minimum,end=maxi;
      while(1){
           int row= minheap.top().second.first, col= minheap.top().second.second;
           minheap.pop();
           if(nums[row].size()-1 == col)break;
           minheap.push({nums[row][col+1],{row,col+1}});
           maxi=max(maxi,nums[row][col+1]);
           minimum=minheap.top().first;
           if(maxi-minimum < end - start){
            end= maxi;
            start= minimum;
           }     
      }
return {start , end};
    }
};