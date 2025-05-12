class Solution {
    public:
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            priority_queue<pair<int, int>> pq;
            vector<int> ans;
            for (auto i : arr) {
                pair<int, int> p = {abs(x - i), i};
                pq.push(p);
                if (pq.size() > k) {
                    pq.pop();
                }
            }
            while (pq.size() > 0) {
                pair<int, int> q = pq.top();
                ans.push_back(q.second);
                pq.pop();
            }
            sort(ans.begin(), ans.end());
            return ans;
        }
    };