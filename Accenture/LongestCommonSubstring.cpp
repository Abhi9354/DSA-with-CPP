#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to find the longest common substring and its ASCII sum
pair<string, int> longestCommonSubstring(const string& s1, const string& s2) {
    int m = s1.length();
    int n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    
    int maxLength = 0;
    string longestSubstring = "";

    // Build the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    longestSubstring = s1.substr(i - maxLength, maxLength);
                }
            }
        }
    }

    // Calculate the ASCII sum of the longest common substring
    int asciiSum = 0;
    for (char c : longestSubstring) {
        asciiSum += static_cast<int>(c);
    }

    return {longestSubstring, asciiSum};
}

int main() {
    string s1 = "mystery";
    string s2 = "legerd";
    
    auto result = longestCommonSubstring(s1, s2);
    
    cout << "Longest Common Substring: " << result.first << endl;
    cout << "ASCII Sum: " << result.second << endl;

    return 0;
}