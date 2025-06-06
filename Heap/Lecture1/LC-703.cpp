class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        int i = 0;
        for (i = 0; i < k && i < nums.size(); i++) {
            minHeap.push(nums[i]);
        }
        while (i < nums.size()) {
            if (minHeap.top() < nums[i]) {
                minHeap.pop();
                minHeap.push(nums[i]);
            }
            i++;
        }
    }
    int add(int val) {
        if (minHeap.size() < k) {
            minHeap.push(val);
        } else if (minHeap.top() < val) {
            minHeap.pop();
            minHeap.push(val);
        }
        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */