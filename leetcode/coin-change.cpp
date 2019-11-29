class Solution {
public:
    int getMinCount(vector<int>& coins, int amount, vector<int>& dp) {
        if(amount < 0) {
            return -1;
        }
        
        if (amount == 0) {
            return 0;
        }
        
        if (dp[amount] != 0){
            return dp[amount];
        }
        
        int min = INT_MAX;
        
        for (auto coin : coins)
        {
            int res = getMinCount(coins, amount - coin, dp);
            if(res >= 0 && res < min){
                min = 1 + res;
            }
        }
        
        dp[amount] = (min == INT_MAX) ? -1 : min;
        
        return dp[amount];
    }
    
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<int> dp(amount+1);
        return getMinCount(coins, amount, dp);
    }
};