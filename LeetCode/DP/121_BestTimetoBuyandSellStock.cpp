class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        
        vector<int> dp(prices.size()+1);
        dp[0] = INT_MAX;
        
        for (int i = 0; i < prices.size(); i++){
            dp[i+1] = min(prices[i], dp[i]); 
            profit = max(profit, prices[i] - dp[i+1]);
        }
        
        return profit;
    }
};
