class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int ans = 0;
        if (numOnes > k)
            ans = k * 1;
        else {
            ans += numOnes * 1;
            k = k - numOnes;
            if (numZeros > k) {
                ans = ans + numZeros * 0;
                k -= numZeros;
                numZeros = 0;
            } else {
                ans += 0 * k;
                k -= numZeros;
            }
            if (k > 0)
                ans += (-1) * k;
        }

        return ans;
    }
};