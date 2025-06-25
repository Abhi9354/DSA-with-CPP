class Solution {
public:
    int minOperations(int n) {
        int upperBound = 0, lowerBound = 0,count=0;
        while (n>2) {
        int original = n;
        n = n | n >> 1;
        n = n | n >> 2;
        n = n | n >> 4;
        n = n | n >> 8;
        n = n | n >> 16;
        upperBound = n + 1;
        lowerBound = upperBound / 2;
            if(upperBound - original > original -lowerBound) n = original - lowerBound;
            else  n = upperBound - original;
            count++;
            if(n==0)return count;
        }
        return count+1;
    }
};