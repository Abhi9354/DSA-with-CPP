class MedianFinder {
public:
    priority_queue<int, vector<int>, greater<int>> right;
    priority_queue<int> left;
    MedianFinder() {}
    void addNum(int num) {
        if (left.size()==0 || num < left.top())
            left.push(num);
        else right.push(num);
        if (left.size() > right.size() + 1) {
            right.push(left.top());
            left.pop();
        }
        if (1 + left.size() < right.size()) {
            left.push(right.top());
            right.pop();
        }
    }
    double findMedian() {
        if (right.size() == left.size()) {
            return (left.top() + right.top()) / 2.0;
        } else if (right.size() > left.size())
            return right.top();
        else return left.top();
    }}t;

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */