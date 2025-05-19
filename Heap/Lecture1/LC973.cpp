class Solution {
    public:
        vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
            int m = points.size();
            int n = points[0].size();
            priority_queue<pair<int,int>>pq;
            for (int i = 0; i < m; i++) {
                int dis=0;
                for (int j = 0; j < n; j++){
                        dis= dis + (points[i][j] * points[i][j]);
                }
                pair<int,int>p= {dis,i};
                pq.push(p);
                if(pq.size()>k)pq.pop();
            }
            vector<vector<int>>ans;
    
            while(pq.size()>0){
                pair<int,int>q= pq.top();
                int idx= q.second;
                ans.push_back(points[idx]);
                pq.pop();
            }
            return ans ;
        }
    };