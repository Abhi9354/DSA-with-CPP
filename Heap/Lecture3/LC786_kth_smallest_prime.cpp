class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double, pair<int, int>>> maxheap;
        int n = arr.size();
        
        for(int i = 0; i < n - 1; ++i){
            for(int j = i + 1; j < n; ++j){
                double fraction = (double)arr[i] / arr[j];
                pair<double, pair<int, int>> p = {fraction, {arr[i], arr[j]}};
                
                if(maxheap.size() < k){
                    maxheap.push(p);
                } else if(maxheap.top().first > fraction){
                    maxheap.pop();
                    maxheap.push(p);
                }
            }
        }
        pair<int, int> result = maxheap.top().second;
        return {result.first, result.second};
    }
};
