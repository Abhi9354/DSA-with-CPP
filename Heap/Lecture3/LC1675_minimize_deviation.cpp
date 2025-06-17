class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        int mini= INT_MAX;
        int res= INT_MAX;
        priority_queue<int> q;
        for(int i = 0 ;i<nums.size();i++){
           if(nums[i]%2==1)nums[i]*=2;
           q.push(nums[i]);
           mini=min(mini,nums[i]);
        }
    
        while(1){
            int t = q.top();
            q.pop();
           res=min(res,t-mini);
            
             mini= min(mini,t/2);
             if(t%2==1)break;
            q.push(t/2);
        }
        return res;
    }
};