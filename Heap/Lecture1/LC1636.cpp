class Solution {
    public:
        vector<int> frequencySort(vector<int>& nums) {
            unordered_map<int, int> m1;
            priority_queue<pair<int, int>> pq;
            for (auto i : nums) {
                m1[i]++;
            }
            for (auto i : m1) {
                pq.push({-1*i.second, i.first});
            }
            int idx=0;
            while(pq.size()>0){
                pair<int,int>p= pq.top();
                int freq= -1* p.first;
                for(int i = 0; i<freq;i++)nums[idx++]=p.second;
                pq.pop();
            }
            return nums;
        }
    };