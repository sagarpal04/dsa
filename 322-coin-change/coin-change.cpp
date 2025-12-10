class Solution {
public:
    vector<int> dp;
    long long solve(vector<int>&coins, int amount){
        if(amount == 0) return 0;
        if(dp[amount] != -1) return dp[amount];
        long long ans = INT32_MAX;
        for(int num : coins){
            if(num <= amount){
                ans = min(ans, 1 + solve(coins, amount - num));
            }
        }
        return dp[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        dp.assign(amount + 1, -1);
        int result = solve(coins, amount);
        return result == INT32_MAX? -1 : result;
    }
};