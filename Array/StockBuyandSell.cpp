#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int maxProfit(vector<int>& prices) {
       int sell;
        int buy = prices[0];
        int maxi=0;
        int profit;
        for(int i = 1;i<prices.size();i++){
            
             sell = prices[i];
             profit= sell-buy;
             maxi= max(maxi,profit);
             buy= min(buy,prices[i]);

        }
        return maxi;
        
        
    }
int main(){
    vector<int>prices;
    prices.push_back(1);
    prices.push_back(2);
    prices.push_back(5);
    prices.push_back(3);
    prices.push_back(6);
    prices.push_back(4);
    cout<< maxProfit(prices);
}