#include <bits/stdc++.h> 

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	vector<int>c;
    int carry = 0;
    int i = n-1;
    int j = m-1;
    while(i>=0||j>=0||carry){
        int sum= carry;
        if(i>=0){
            sum = sum+a[i];
            i--;
        }
        if(j>=0){
            sum= sum+b[j];
            j--;
        }
        carry = sum/10;
        c.push_back(sum%10);
    }
    reverse(c.begin(),c.end());
    return c;
	}