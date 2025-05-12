class Solution {
    public:
        vector<int> topKFrequent(vector<int>& nums, int k) {
            unordered_map<int, int> m1;
            priority_queue<pair<int, int>, vector<pair<int, int>>,greater<pair<int, int>>>   pq;
            for (auto i : nums) {
                m1[i]++;
            }
            for (auto i : m1) {
                pq.push({i.second, i.first});
                if (pq.size() > k) {
                    pq.pop();
                }
            }
            vector<int> v;
            while (pq.size() > 0) {
                pair<int, int> p = pq.top();
                v.push_back(p.second);
                pq.pop();
            }
    
            return v;
        }
    };